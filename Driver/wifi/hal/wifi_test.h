#ifndef _WIFI_TEST_H
#define _WIFI_TEST_H
//#include "stm32f10x.h"

#define MAX_SSID_LEN 32

typedef enum
{
    WIFI_TEST_STATE_DISCONNECTED = 0,
    WIFI_TEST_STATE_SCANNING,
    WIFI_TEST_STATE_SCAN_DONE,
    WIFI_TEST_STATE_CONNECTING,
    WIFI_TEST_STATE_CONNECTED,
    WIFI_TEST_STATE_DHCP_DOING,
    WIFI_TEST_STATE_IP_CONFIGED,
    WIFI_TEST_STATE_COMMAND_TESTING,
    WIFI_TEST_STATE_NUM
} WIFI_TEST_STATE_TYPE_E;

typedef enum
{
    WIFI_USER_CONNECT_AP = 0,
    WIFI_USER_DUMMY,
    WIFI_USER_ENTER_INTERACTIVE,
    WIFI_USER_DISCONNECT_WITH_AP,
    WIFI_USER_ACTION_MAX
} WIFI_USER_ACTION_TYPE_E;

void  wifi_test_task (void *p_arg);

#endif
