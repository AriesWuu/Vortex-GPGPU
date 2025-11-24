ROOT_DIR := $(realpath ../../..)
include $(ROOT_DIR)/config.mk

PROJECT := sgemm

SRC_DIR := $(VORTEX_HOME)/tests/regression/$(PROJECT)

SRCS := $(SRC_DIR)/main.cpp

VX_SRCS := $(SRC_DIR)/kernel.cpp

# Configure to use int8_t input and int32_t output for fair comparison with dot8
# CXXFLAGS += -DINPUT_TYPE=int8_t -DOUTPUT_TYPE=int32_t
# VX_CFLAGS += -DINPUT_TYPE=int8_t -DOUTPUT_TYPE=int32_t

OPTS ?= -n32

include ../common.mk