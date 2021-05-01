# MCU name
MCU = STM32F411

# Build Options
#   change yes to no to disable
#


BOOTMAGIC_ENABLE = lite     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
# LTO_ENABLE = no
EXTRAKEY_ENABLE = no       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow
ENCODER_ENABLE = no        # Enable rotary encoder support
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
KEYBOARD_SHARED_EP = no    # Free up some extra endpoints - needed if console+mouse+extra

SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart
OLED_DRIVER_ENABLE = no
# WS2812_DRIVER = pwm
OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE

# Address of the bootloader in system memory
STM32_BOOTLOADER_ADDRESS = 0x1FFF0000

LAYOUTS = split_3x6_3
