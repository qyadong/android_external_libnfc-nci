/****************************************************************************
**
**  Name:       config.h
**
**  Function:   this file contains constant definitions for config settings
**
**
**  Copyright (c) 1999-2011, Broadcom Corp., All Rights Reserved.
**  Broadcom Bluetooth Core. Proprietary and confidential.
**
*****************************************************************************/
#ifndef __CONFIG_H
#define __CONFIG_H

#ifdef __cplusplus
extern "C"
{
#endif

int GetStrValue(const char* name, char* p_value, unsigned long len);
int GetNumValue(const char* name, void* p_value, unsigned long len);

#ifdef __cplusplus
};
#endif

#define NAME_NFA_DM_MULTI_TECH_RESP     "NFA_DM_MULTI_TECH_RESP"
#define NAME_USE_NXP_P2P_RC_WORKAROUND  "USE_NXP_P2P_RC_WORKAROUND"
#define NAME_JNI_VERSION                "JNI_VERSION"
#define NAME_NFA_DM_ENABLE_SLEEP        "NFA_DM_ENABLE_SLEEP"
#define NAME_ENABLE_BRCM_EXTRAS_API     "ENABLE_BRCM_EXTRAS_API"
#define NAME_POLLING_TECH_MASK          "POLLING_TECH_MASK"
#define NAME_REGISTER_VIRTUAL_SE        "REGISTER_VIRTUAL_SE"
#define NAME_APPL_TRACE_LEVEL           "APPL_TRACE_LEVEL"
#define NAME_LPTD_CFG                   "LPTD_CFG"
#define NAME_SCREEN_OFF_POWER_STATE     "SCREEN_OFF_POWER_STATE"
#define NAME_UICC_IDLE_TIMEOUT          "UICC_IDLE_TIMEOUT"
#define NAME_PREINIT_DSP_CFG            "PREINIT_DSP_CFG"
#define NAME_DTA_START_CFG              "DTA_START_CFG"
#define NAME_TRANSPORT_DRIVER           "TRANSPORT_DRIVER"
#define NAME_POWER_CONTROL_DRIVER       "POWER_CONTROL_DRIVER"
#define NAME_PROTOCOL_TRACE_LEVEL       "PROTOCOL_TRACE_LEVEL"
#define NAME_UART_PORT                  "UART_PORT"
#define NAME_UART_BAUD                  "UART_BAUD"
#define NAME_UART_PARITY                "UART_PARITY"
#define NAME_UART_STOPBITS              "UART_STOPBITS"
#define NAME_UART_DATABITS              "UART_DATABITS"
#define NAME_CLIENT_ADDRESS             "BCMI2CNFC_ADDRESS"
#define NAME_NFA_DM_START_UP_CFG        "NFA_DM_START_UP_CFG"
#define NAME_NFA_DM_CFG                 "NFA_DM_CFG"
#define NAME_NFA_DM_LP_CFG              "NFA_DM_LP_CFG"
#define NAME_LOW_SPEED_TRANSPORT        "LOW_SPEED_TRANSPORT"
#define NAME_NFC_WAKE_DELAY             "NFC_WAKE_DELAY"
#define NAME_NFC_WRITE_DELAY            "NFC_WRITE_DELAY"
#define NAME_PERF_MEASURE_FREQ          "REPORT_PERFORMANCE_MEASURE"
#define NAME_READ_MULTI_PACKETS         "READ_MULTIPLE_PACKETS"
#define NAME_POWER_ON_DELAY             "POWER_ON_DELAY"
#define NAME_PRE_POWER_OFF_DELAY        "PRE_POWER_OFF_DELAY"
#define NAME_POST_POWER_OFF_DELAY       "POST_POWER_OFF_DELAY"
#define NAME_NFA_STORAGE                "NFA_STORAGE"
#define NAME_NFA_DM_START_UP_VSC_CFG    "NFA_DM_START_UP_VSC_CFG"
#define NAME_UICC_LISTEN_TECH_MASK      "UICC_LISTEN_TECH_MASK"
#define NAME_SNOOZE_MODE_CFG            "SNOOZE_MODE_CFG"
#define NAME_XTAL_FREQUENCY             "XTAL_FREQUENCY"
#define NAME_NFA_DM_DISC_DURATION_POLL  "NFA_DM_DISC_DURATION_POLL"

#define                     LPTD_PARAM_LEN (40)

// default configuration
#define default_transport       "/dev/bcm2079x"
#define default_storage_location "/data/bcmnfc"

struct tUART_CONFIG {
    int     m_iBaudrate;            // 115200
    int     m_iDatabits;            // 8
    int     m_iParity;              // 0 - none, 1 = odd, 2 = even
    int     m_iStopbits;
};

extern struct tUART_CONFIG  uartConfig;
#define MAX_CHIPID_LEN  (16)
void    readOptionalConfig(const char* option);

/* Snooze mode configuration structure */
typedef struct
{
    unsigned char   snooze_mode;            /* Snooze Mode */
    unsigned char   idle_threshold_dh;      /* Idle Threshold Host */
    unsigned char   idle_threshold_nfcc;    /* Idle Threshold NFCC   */
    unsigned char   nfc_wake_active_mode;   /* NFC_LP_ACTIVE_LOW or NFC_LP_ACTIVE_HIGH */
    unsigned char   dh_wake_active_mode;    /* NFC_LP_ACTIVE_LOW or NFC_LP_ACTIVE_HIGH */
} tSNOOZE_MODE_CONFIG;
#endif
