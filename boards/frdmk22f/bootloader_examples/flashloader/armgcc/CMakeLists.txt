INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -g")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK22FN512VLH12")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DBL_TARGET_RAM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFRDM_K22F")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSB_STACK_BM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFSL_OSA_BM_TIMER_CONFIG=FSL_OSA_BM_TIMER_NONE")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK22FN512VLH12")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DBL_TARGET_RAM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFRDM_K22F")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSB_STACK_BM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFSL_OSA_BM_TIMER_CONFIG=FSL_OSA_BM_TIMER_NONE")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -g")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCPU_MK22FN512VLH12")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mthumb")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-common")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mapcs")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DCPU_MK22FN512VLH12")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -g")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mthumb")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-common")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mapcs")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-rtti")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-exceptions")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__ram_vector_table__=1")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -g")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__ram_vector_table__=1")

include_directories(${ProjDirPath}/../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/include)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/startup)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/utilities)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/drivers)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/drivers/crc)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/drivers/microseconds)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/drivers/smc)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src)

include_directories(${ProjDirPath}/../../../../../devices)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/autobaud)

include_directories(${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb)

include_directories(${ProjDirPath}/../../../../../devices/MK22F51212)

include_directories(${ProjDirPath}/../../../../../devices/MK22F51212/drivers)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../../../../middleware/usb/device)

include_directories(${ProjDirPath}/../../../../../middleware/usb/include)

include_directories(${ProjDirPath}/../../../../../components/osa)

include_directories(${ProjDirPath}/../../../../../components/lists)

add_executable(flashloader.elf 
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_clock.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_flash.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_adapter.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_cache.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_cache.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_controller.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_controller.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_features.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_flash.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_flash.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_flexnvm.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_flexnvm.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_ftfx_utilities.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/MK22F51212.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/MK22F51212_features.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/fsl_device_registers.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_uart.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_uart.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_gpio.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_i2c.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_i2c.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_port.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_dspi.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_dspi.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_crc.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_crc.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_khci.c"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_khci.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb_misc.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb_spec.h"
"${ProjDirPath}/../usb_device_hid.c"
"${ProjDirPath}/../usb_device_hid.h"
"${ProjDirPath}/../usb_device_msc.c"
"${ProjDirPath}/../usb_device_msc.h"
"${ProjDirPath}/../usb_device_msc_ufi.c"
"${ProjDirPath}/../usb_device_msc_ufi.h"
"${ProjDirPath}/../usb_device_ch9.c"
"${ProjDirPath}/../usb_device_ch9.h"
"${ProjDirPath}/../usb_device_class.c"
"${ProjDirPath}/../usb_device_class.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_dci.c"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_dci.h"
"${ProjDirPath}/../../../../../devices/MK22F51212/system_MK22F51212.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/system_MK22F51212.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/startup/crt0_gcc.S"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/startup/gcc/startup_MK22F51212.S"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/autobaud/autobaud.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/autobaud/src/autobaud_irq.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_app_crc_check.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_command.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_context.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_irq_common.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_peripheral.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_peripheral_interface.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_shutdown_cleanup.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_user_entry.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_version.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bootloader.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_app_crc_check.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_command.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_context.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_exception_handler.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_main.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_misc.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_shutdown_cleanup.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_tree_root.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_user_entry.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/crc/crc16.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/crc/crc32.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/crc/src/crc16.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/crc/src/crc32.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/include/bootloader_common.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/memory.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/device_memory.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/device_memory.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/memory.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/normal_memory.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/normal_memory.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/pattern_fill.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/pattern_fill_gcc.S"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/sram_init.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/packet/command_packet.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/packet/serial_packet.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/packet/src/serial_packet.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/property/property.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/sbloader/sb_file_format.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/sbloader/sbloader.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/sbloader/src/sbloader.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/startup/ar_asm_macros.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/utilities/fsl_assert.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/utilities/fsl_rtos_abstraction.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/utilities/src/debug_util.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/utilities/src/fsl_assert.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/utilities/src/fsl_rtos_abstraction.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/utilities/vector_table_info.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/bl_reliable_update.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/bl_reliable_update.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/drivers/smc/smc.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/drivers/smc/smc.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/flash_memory.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/flash_memory.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/property/src/property_kinetis.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/utilities/kinetis_family.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/dspi_peripheral_interface.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/i2c_peripheral_interface.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/scuart_peripheral_interface.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bootloader/src/usb_hid_msc_peripheral_interface.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/memory/src/sram_init_cm4.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/bootloader_config.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/clock_config_MK22F51212.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/hardware_init_MK22F51212.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/memory_map_MK22F51212.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/peripherals_MK22F51212.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/peripherals_pinmux.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/target_config.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/MK22F51212/src/usb_device_config.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/common/src/bl_dspi_irq_config_common.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/common/src/bl_i2c_irq_config_common.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/common/src/bl_uart_irq_config_common.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/targets/common/src/pinmux_utility_common.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/bootloader_hid_report_ids.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/composite.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/composite.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/fat_directory_entry.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/hid_bootloader.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/hid_bootloader.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/msc_disk.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/msc_disk.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/usb_descriptor.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/bm_usb/usb_descriptor.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/include/bootloader_core.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/startup/startup.c"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/drivers/microseconds/microseconds.h"
"${ProjDirPath}/../../../../../middleware/mcu-boot/src/drivers/microseconds/src/microseconds_sysclk.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_common.c"
"${ProjDirPath}/../../../../../devices/MK22F51212/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_cm4.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armcc.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armclang.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armclang_ltm.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_compiler.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_gcc.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_iccarm.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_version.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_armv81mml.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_armv8mbl.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_armv8mml.h"
"${ProjDirPath}/../../../../../CMSIS/Include/mpu_armv7.h"
"${ProjDirPath}/../../../../../CMSIS/Include/mpu_armv8.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_common_tables.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_const_structs.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_math.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_bm.c"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_bm.h"
"${ProjDirPath}/../../../../../components/osa/fsl_os_abstraction_config.h"
"${ProjDirPath}/../../../../../components/lists/generic_list.c"
"${ProjDirPath}/../../../../../components/lists/generic_list.h"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/MK22FN512xxx12_ram_flashloader.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/MK22FN512xxx12_ram_flashloader.ld -static")

TARGET_LINK_LIBRARIES(flashloader.elf -Wl,--start-group)
target_link_libraries(flashloader.elf debug m)

target_link_libraries(flashloader.elf debug c)

target_link_libraries(flashloader.elf debug gcc)

target_link_libraries(flashloader.elf debug nosys)

target_link_libraries(flashloader.elf optimized m)

target_link_libraries(flashloader.elf optimized c)

target_link_libraries(flashloader.elf optimized gcc)

target_link_libraries(flashloader.elf optimized nosys)

TARGET_LINK_LIBRARIES(flashloader.elf -Wl,--end-group)

ADD_CUSTOM_COMMAND(TARGET flashloader.elf POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Obinary ${EXECUTABLE_OUTPUT_PATH}/flashloader.elf ${EXECUTABLE_OUTPUT_PATH}/flashloader.bin)

ADD_CUSTOM_COMMAND(TARGET flashloader.elf POST_BUILD COMMAND
python ../../../../../middleware/mcu-boot/bin/create_fl_image_mcux.py ${EXECUTABLE_OUTPUT_PATH}/flashloader.elf ${EXECUTABLE_OUTPUT_PATH}/flashloader.bin ${EXECUTABLE_OUTPUT_PATH}/flashloader_image.c
)

