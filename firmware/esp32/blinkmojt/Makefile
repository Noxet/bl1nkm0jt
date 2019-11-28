#
# This is a project Makefile. It is assumed the directory this Makefile resides in is a
# project subdirectory.
#

PROJECT_NAME := blinkmojt

EXTRA_COMPONENT_DIRS = $(BLINKMOJT_PATH)/firmware/esp32/components/bm_wifi
EXTRA_COMPONENT_DIRS += $(BLINKMOJT_PATH)/firmware/esp32/components/uart

include $(IDF_PATH)/make/project.mk

blinkmojt:
	python $(BLINKMOJT_PATH)/index/index_gen.py
	$(MAKE) build