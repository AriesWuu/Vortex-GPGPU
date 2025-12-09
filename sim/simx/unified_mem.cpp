// Copyright © 2019-2023
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "unified_mem.h"

#include <algorithm>

#include "constants.h"

namespace vortex {

UnifiedMemCtrl& UnifiedMemCtrl::instance() {
  static UnifiedMemCtrl ctrl;
  return ctrl;
}

UnifiedMemCtrl::UnifiedMemCtrl() {
  this->reset();
}

uint32_t UnifiedMemCtrl::calc_total_bytes() const {
  // In unified cache mode, dcache is partitioned between L1 cache and shared memory
  // The total capacity is DCACHE_SIZE, not DCACHE_SIZE + LMEM_SIZE
  // LMEM_ENABLED just means shared memory goes through dcache, not that we have extra storage
  return DCACHE_SIZE;
}

void UnifiedMemCtrl::update_shared_bytes() {
  if (cache_bytes_ > total_bytes_)
    cache_bytes_ = total_bytes_;

  // align cache bytes down to line granularity
  if (cache_bytes_ != 0)
    cache_bytes_ = (cache_bytes_ / L1_LINE_SIZE) * L1_LINE_SIZE;

  if (cache_bytes_ > total_bytes_)
    cache_bytes_ = total_bytes_;

  uint32_t shared = (total_bytes_ >= cache_bytes_) ? (total_bytes_ - cache_bytes_) : 0;
  if (shared != 0)
    shared = (shared / LSU_WORD_SIZE) * LSU_WORD_SIZE;

  if (shared > total_bytes_)
    shared = total_bytes_;

  cache_bytes_ = (shared > total_bytes_) ? 0 : (total_bytes_ - shared);
  cache_percent_ = (total_bytes_ == 0) ? 0 : (uint32_t)(((uint64_t)cache_bytes_) * 100ull / total_bytes_);
}

void UnifiedMemCtrl::reset() {
  total_bytes_ = this->calc_total_bytes();
  cache_bytes_ = std::min<uint32_t>(DCACHE_SIZE, total_bytes_);
  cache_percent_ = 0;
  this->update_shared_bytes();
}

void UnifiedMemCtrl::set_cache_bytes(uint32_t cache_bytes) {
  total_bytes_ = this->calc_total_bytes();
  cache_bytes_ = std::min(cache_bytes, total_bytes_);
  this->update_shared_bytes();
}

void UnifiedMemCtrl::set_cache_percent(uint32_t cache_percent) {
  total_bytes_ = this->calc_total_bytes();
  cache_percent = std::min(cache_percent, 100u);
  if (total_bytes_ == 0) {
    cache_bytes_ = 0;
  } else {
    cache_bytes_ = (uint32_t)(((uint64_t)total_bytes_ * cache_percent) / 100ull);
  }
  this->update_shared_bytes();
}

void UnifiedMemCtrl::set_smem_sets(uint32_t sm_sets) {
  total_bytes_ = this->calc_total_bytes();

  uint64_t bytes_per_set = (uint64_t)L1_LINE_SIZE * (uint64_t)DCACHE_NUM_WAYS;
  if (0 == bytes_per_set) {
    cache_bytes_ = 0;
    this->update_shared_bytes();
    return;
  }

  // Calculate total sets and L1 cache sets from shared memory sets
  uint64_t total_sets = total_bytes_ / bytes_per_set;
  uint64_t clamped_sm_sets = std::min<uint64_t>(sm_sets, total_sets);
  uint64_t cache_sets = total_sets - clamped_sm_sets;
  cache_bytes_ = (uint32_t)(cache_sets * bytes_per_set);

  this->update_shared_bytes();
}

uint32_t UnifiedMemCtrl::cache_bytes() const {
  return cache_bytes_;
}

uint32_t UnifiedMemCtrl::shared_bytes() const {
  if (total_bytes_ >= cache_bytes_)
    return total_bytes_ - cache_bytes_;
  return 0;
}

uint32_t UnifiedMemCtrl::total_bytes() const {
  return total_bytes_;
}

uint32_t UnifiedMemCtrl::cache_percent() const {
  return cache_percent_;
}

} // namespace vortex
