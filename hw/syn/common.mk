CUR_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
ROOT_DIR := $(realpath $(CUR_DIR)/../..)
include $(ROOT_DIR)/config.mk

HW_DIR := $(VORTEX_HOME)/hw
RTL_DIR := $(HW_DIR)/rtl
SCRIPT_DIR := $(HW_DIR)/scripts
