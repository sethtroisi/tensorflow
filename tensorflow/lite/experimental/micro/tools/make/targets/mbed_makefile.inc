# Settings for mbed platforms.
ifeq ($(TARGET), mbed)
  TARGET_ARCH := cortex-m4
  $(eval $(call add_third_party_download,$(CMSIS_URL),$(CMSIS_MD5),cmsis,))
  $(eval $(call add_third_party_download,$(CUST_CMSIS_URL),$(CUST_CMSIS_MD5),CMSIS_ext,))
endif