#ifndef _WLAN_CFG_H_
#define _WLAN_CFG_H_

//#define CONFIG_DEBUG_SUPPORT

//#define CONFIG_TEST_FW

#define CONFIG_SPI_HCI

#define CONFIG_LITTLE_ENDIAN

#define CONFIG_SPI_LITTLE_ENDIAN

#define PLATFORM_OS_UCOS

//#define HAL_RF_ENABLE
//#define HAL_BB_ENABLE
#define CONFIG_FW_DOWNLOAD

#define INCLUDE_WPA_WPA2_PSK
#define CONFIG_SOFTAP_SUPPORT

//#define CONFIG_LPS
//#define CONFIG_EXT_CLK
//#define CONFIG_LAYER2_ROAMING

//#define SW_ENCRYPT_SUPPORT
//#define SW_DECRYPT_SUPPORT

//#define CONFIG_WOWLAN_TEST
//#define CONFIG_LPS_TEST
//#define CONFIG_FW_STATUS_TEST

#define CONFIG_HEAP_USAGE_TRACKING

#define TX_ZERO_BUF_COPY
#define SOFTAP_STA_PS

#ifdef SOFTAP_STA_PS
#define XMIT_USE_STA_QUEUE
#endif

#endif

