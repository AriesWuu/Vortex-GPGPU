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

#pragma once

#include <cstdint>

namespace vortex {

class UnifiedMemCtrl {
public:
  static UnifiedMemCtrl& instance();

  void reset();

  void set_cache_bytes(uint32_t cache_bytes);

  void set_cache_percent(uint32_t cache_percent);

  void set_cache_sets(uint32_t cache_sets);

  uint32_t cache_bytes() const;

  uint32_t shared_bytes() const;

  uint32_t total_bytes() const;

  uint32_t cache_percent() const;

private:
  UnifiedMemCtrl();

  uint32_t calc_total_bytes() const;

  void update_shared_bytes();

  uint32_t total_bytes_;
  uint32_t cache_bytes_;
  uint32_t cache_percent_;
};

inline uint32_t unified_mem_total_bytes() {
  return UnifiedMemCtrl::instance().total_bytes();
}

inline uint32_t unified_mem_cache_bytes() {
  return UnifiedMemCtrl::instance().cache_bytes();
}

inline uint32_t unified_mem_shared_bytes() {
  return UnifiedMemCtrl::instance().shared_bytes();
}

inline void unified_mem_set_cache_bytes(uint32_t bytes) {
  UnifiedMemCtrl::instance().set_cache_bytes(bytes);
}

inline void unified_mem_set_cache_percent(uint32_t percent) {
  UnifiedMemCtrl::instance().set_cache_percent(percent);
}

inline void unified_mem_set_cache_sets(uint32_t sets) {
  UnifiedMemCtrl::instance().set_cache_sets(sets);
}

inline uint32_t unified_mem_cache_percent() {
  return UnifiedMemCtrl::instance().cache_percent();
}

} // namespace vortex
