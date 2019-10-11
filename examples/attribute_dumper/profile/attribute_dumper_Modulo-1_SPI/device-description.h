/*
 * Afero Device Profile header file
 * Device Description:		
 * Schema Version:	2
 */

// Module Configurations
#define AF_BOARD_MODULO_1                                    0
#define AF_BOARD_MODULO_1B                                   1
#define AF_BOARD_MODULO_2                                    2
#define AF_BOARD_MODULO_2C                                   3
#define AF_BOARD_MODULO_2D                                   4
#define AF_BOARD_ABELO_2A                                    5
#define AF_BOARD_ABELO_2B                                    6
#define AF_BOARD_POTENCO                                     7
#define AF_BOARD_QUANTA                                      8

#define AF_BOARD                             AF_BOARD_MODULO_1

// Data Types
#define ATTRIBUTE_TYPE_BOOLEAN                               1
#define ATTRIBUTE_TYPE_SINT8                                 2
#define ATTRIBUTE_TYPE_SINT16                                3
#define ATTRIBUTE_TYPE_SINT32                                4
#define ATTRIBUTE_TYPE_SINT64                                5
#define ATTRIBUTE_TYPE_Q_15_16                               6
#define ATTRIBUTE_TYPE_UTF8S                                20
#define ATTRIBUTE_TYPE_BYTES                                21

//region Service ID 1
// Attribute SINT8
#define AF_SINT8                                             1
#define AF_SINT8_SZ                                          1
#define AF_SINT8_TYPE                     ATTRIBUTE_TYPE_SINT8

// Attribute SINT16
#define AF_SINT16                                            2
#define AF_SINT16_SZ                                         2
#define AF_SINT16_TYPE                   ATTRIBUTE_TYPE_SINT16

// Attribute SINT32
#define AF_SINT32                                            3
#define AF_SINT32_SZ                                         4
#define AF_SINT32_TYPE                   ATTRIBUTE_TYPE_SINT32

// Attribute SINT64
#define AF_SINT64                                            4
#define AF_SINT64_SZ                                         8
#define AF_SINT64_TYPE                   ATTRIBUTE_TYPE_SINT64

// Attribute Q_15_16
#define AF_Q_15_16                                           5
#define AF_Q_15_16_SZ                                        4
#define AF_Q_15_16_TYPE                 ATTRIBUTE_TYPE_Q_15_16

// Attribute BOOLEAN
#define AF_BOOLEAN                                           6
#define AF_BOOLEAN_SZ                                        1
#define AF_BOOLEAN_TYPE                 ATTRIBUTE_TYPE_BOOLEAN

// Attribute UTF8S
#define AF_UTF8S                                             7
#define AF_UTF8S_SZ                                         10
#define AF_UTF8S_TYPE                     ATTRIBUTE_TYPE_UTF8S

// Attribute BYTES
#define AF_BYTES                                             8
#define AF_BYTES_SZ                                         16
#define AF_BYTES_TYPE                     ATTRIBUTE_TYPE_BYTES

// Attribute LED
#define AF_LED                                            1024
#define AF_LED_SZ                                            2
#define AF_LED_TYPE                      ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 0 Configuration
#define AF_GPIO_0_CONFIGURATION                           1025
#define AF_GPIO_0_CONFIGURATION_SZ                           8
#define AF_GPIO_0_CONFIGURATION_TYPE     ATTRIBUTE_TYPE_SINT64

// Attribute IO1
#define AF_IO1                                            1026
#define AF_IO1_SZ                                            2
#define AF_IO1_TYPE                      ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 1 Configuration
#define AF_GPIO_1_CONFIGURATION                           1027
#define AF_GPIO_1_CONFIGURATION_SZ                           8
#define AF_GPIO_1_CONFIGURATION_TYPE     ATTRIBUTE_TYPE_SINT64

// Attribute IO2
#define AF_IO2                                            1028
#define AF_IO2_SZ                                            2
#define AF_IO2_TYPE                      ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 2 Configuration
#define AF_GPIO_2_CONFIGURATION                           1029
#define AF_GPIO_2_CONFIGURATION_SZ                           8
#define AF_GPIO_2_CONFIGURATION_TYPE     ATTRIBUTE_TYPE_SINT64

// Attribute BUTTON
#define AF_BUTTON                                         1030
#define AF_BUTTON_SZ                                         2
#define AF_BUTTON_TYPE                   ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 3 Configuration
#define AF_GPIO_3_CONFIGURATION                           1031
#define AF_GPIO_3_CONFIGURATION_SZ                           8
#define AF_GPIO_3_CONFIGURATION_TYPE     ATTRIBUTE_TYPE_SINT64

// Attribute Bootloader Version
#define AF_BOOTLOADER_VERSION                             2001
#define AF_BOOTLOADER_VERSION_SZ                             8
#define AF_BOOTLOADER_VERSION_TYPE       ATTRIBUTE_TYPE_SINT64

// Attribute Softdevice Version
#define AF_SOFTDEVICE_VERSION                             2002
#define AF_SOFTDEVICE_VERSION_SZ                             8
#define AF_SOFTDEVICE_VERSION_TYPE       ATTRIBUTE_TYPE_SINT64

// Attribute Application Version
#define AF_APPLICATION_VERSION                            2003
#define AF_APPLICATION_VERSION_SZ                            8
#define AF_APPLICATION_VERSION_TYPE      ATTRIBUTE_TYPE_SINT64

// Attribute Profile Version
#define AF_PROFILE_VERSION                                2004
#define AF_PROFILE_VERSION_SZ                                8
#define AF_PROFILE_VERSION_TYPE          ATTRIBUTE_TYPE_SINT64

// Attribute UTC Offset Data
#define AF_SYSTEM_UTC_OFFSET_DATA                        65001
#define AF_SYSTEM_UTC_OFFSET_DATA_SZ                         8
#define AF_SYSTEM_UTC_OFFSET_DATA_TYPE    ATTRIBUTE_TYPE_BYTES

// Attribute Command
#define AF_SYSTEM_COMMAND                                65012
#define AF_SYSTEM_COMMAND_SZ                                 4
#define AF_SYSTEM_COMMAND_TYPE           ATTRIBUTE_TYPE_SINT32

// Attribute ASR State
#define AF_SYSTEM_ASR_STATE                              65013
#define AF_SYSTEM_ASR_STATE_SZ                               1
#define AF_SYSTEM_ASR_STATE_TYPE          ATTRIBUTE_TYPE_SINT8

// Attribute Low Power Warn
#define AF_SYSTEM_LOW_POWER_WARN                         65014
#define AF_SYSTEM_LOW_POWER_WARN_SZ                          1
#define AF_SYSTEM_LOW_POWER_WARN_TYPE     ATTRIBUTE_TYPE_SINT8

// Attribute Linked Timestamp
#define AF_SYSTEM_LINKED_TIMESTAMP                       65015
#define AF_SYSTEM_LINKED_TIMESTAMP_SZ                        4
#define AF_SYSTEM_LINKED_TIMESTAMP_TYPE  ATTRIBUTE_TYPE_SINT32

// Attribute Reboot Reason
#define AF_SYSTEM_REBOOT_REASON                          65019
#define AF_SYSTEM_REBOOT_REASON_SZ                         100
#define AF_SYSTEM_REBOOT_REASON_TYPE      ATTRIBUTE_TYPE_UTF8S

//endregion Service ID 1