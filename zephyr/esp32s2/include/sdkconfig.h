#ifdef CONFIG_MCUBOOT

#define CONFIG_ESP32S2_XTAL_FREQ 40

#define CONFIG_BOOTLOADER_FLASH_XMC_SUPPORT 1
#define CONFIG_EFUSE_VIRTUAL_OFFSET 0x250000
#define CONFIG_EFUSE_VIRTUAL_SIZE 0x2000
#define CONFIG_EFUSE_MAX_BLK_LEN 256

#endif /* CONFIG_MCUBOOT */

#define CONFIG_LOG_TIMESTAMP_SOURCE_RTOS 1
#define CONFIG_BOOTLOADER_LOG_LEVEL 3
#define CONFIG_FREERTOS_UNICORE 1
#define CONFIG_SPIRAM_ALLOW_BSS_SEG_EXTERNAL_MEMORY 1
#define CONFIG_IDF_FIRMWARE_CHIP_ID 0x0002
#define CONFIG_SPIRAM_SIZE -1
