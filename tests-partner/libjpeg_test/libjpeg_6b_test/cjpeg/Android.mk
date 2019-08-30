LOCAL_PATH := $(call my-dir)

include $(NVIDIA_DEFAULTS)
#include $(NVIDIA_EXECUTABLE)

ifeq ($(patsubst tegra%,tegra,$(TARGET_BOARD_PLATFORM)),tegra)
LOCAL_CFLAGS += -DTEGRA_ACCELERATE
endif

LOCAL_MODULE := cjpeg
LOCAL_MODULE_TAGS := nvidia_tests

LOCAL_C_INCLUDES += $(TOP)/external/jpeg
LOCAL_C_INCLUDES += $(TOP)/core/include
LOCAL_C_INCLUDES += $(NVLIB_HWINC_INCLUDES)
LOCAL_C_INCLUDES += $(NVLIB_COMMON_INCLUDES)
LOCAL_C_INCLUDES += $(NVLIB_KHRONOS_INCLUDES)
LOCAL_C_INCLUDES += $(NVLIB_X11_ROOT)/include
LOCAL_C_INCLUDES += $(OUTPUT_DIRNAME)


LOCAL_SRC_FILES += cjpeg.c rdppm.c rdgif.c rdtarga.c rdrle.c \
                   rdbmp.c rdswitch.c rdy4m.c cdjpeg.c

LOCAL_SHARED_LIBRARIES += libjpeg
LOCAL_SHARED_LIBRARIES += libcutils
LOCAL_SHARED_LIBRARIES += libutils

LOCAL_NVIDIA_NO_EXTRA_WARNINGS :=1
LOCAL_NVIDIA_NO_WARNINGS_AS_ERRORS :=1

LOCAL_NVIDIA_NO_EXTRA_WARNINGS :=1
LOCAL_NVIDIA_NO_WARNINGS_AS_ERRORS :=1

include $(NVIDIA_EXECUTABLE)