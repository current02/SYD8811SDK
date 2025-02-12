#ifndef _BLE_SERVICE_H_
#define _BLE_SERVICE_H_

/* Handle Index */
#define SERVICE_CHANGED_IDX 0
#define BATTERY_LEVEL_IDX 1
#define UART_NOTIFY_IDX 2
#define WECHAT_INDICATE_IDX 3

/* GENERIC_ACCESS*/
#define GENERIC_ACCESS 0x1800
#define DEVICE_NAME_UUID 0x2A00
#define DEVICE_NAME_VALUE_HANDLE 0x0003
#define APPEARANCE_UUID 0x2A01
#define APPEARANCE_VALUE_HANDLE 0x0005
#define PERIPHERAL_PREFERRED_CONNECTION_PARAMETERS_UUID 0x2A04
#define PERIPHERAL_PREFERRED_CONNECTION_PARAMETERS_VALUE_HANDLE 0x0007

/* GENERIC_ATTRIBUTE*/
#define GENERIC_ATTRIBUTE 0x1801
#define SERVICE_CHANGED_UUID 0x2A05
#define SERVICE_CHANGED_VALUE_HANDLE 0x000A

/* DEVICE_INFORMATION*/
#define DEVICE_INFORMATION 0x180A
#define MANUFACTURER_NAME_STRING_UUID 0x2A29
#define MANUFACTURER_NAME_STRING_VALUE_HANDLE 0x000E
#define MODEL_NUMBER_STRING_UUID 0x2A24
#define MODEL_NUMBER_STRING_VALUE_HANDLE 0x0010
#define SERIAL_NUMBER_STRING_UUID 0x2A25
#define SERIAL_NUMBER_STRING_VALUE_HANDLE 0x0012
#define HARDWARE_REVISION_STRING_UUID 0x2A27
#define HARDWARE_REVISION_STRING_VALUE_HANDLE 0x0014
#define FIRMWARE_REVISION_STRING_UUID 0x2A26
#define FIRMWARE_REVISION_STRING_VALUE_HANDLE 0x0016
#define SOFTWARE_REVISION_STRING_UUID 0x2A28
#define SOFTWARE_REVISION_STRING_VALUE_HANDLE 0x0018
#define PNP_ID_UUID 0x2A50
#define PNP_ID_VALUE_HANDLE 0x001A

/* BATTERY_SERVICE*/
#define BATTERY_SERVICE 0x180F
#define BATTERY_LEVEL_UUID 0x2A19
#define BATTERY_LEVEL_VALUE_HANDLE 0x001D

/* UART*/
#define UART 0x0001
#define UART_Write_UUID 0x0002
#define UART_Write_VALUE_HANDLE 0x0022
#define UART_NOTIFY_UUID 0x0003
#define UART_NOTIFY_VALUE_HANDLE 0x0024

/* WECHAT*/
#define WECHAT 0xFEE7
#define WECHAT_WRITE_UUID 0xFEC7
#define WECHAT_WRITE_VALUE_HANDLE 0x0028
#define WECHAT_INDICATE_UUID 0xFEC8
#define WECHAT_INDICATE_VALUE_HANDLE 0x002A
#define WECHAT_READ__UUID 0xFEC9
#define WECHAT_READ__VALUE_HANDLE 0x002D

/* OTA*/
#define OTA 0xFF00
#define OTA_Read_Write_UUID 0xFF01
#define OTA_Read_Write_VALUE_HANDLE 0x0030

#endif
