#define STM32F4DISC

#define MICROPY_HW_BOARD_NAME       "F4DISC"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (1)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_HAS_WLAN         (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_AUDIO     (0)

// USRSW is pulled low. Pressing the button makes the input go high.
#define USRSW_PIN           (pin_A0)
#define USRSW_PULL          (GPIO_NOPULL)
#define USRSW_EXTI_MODE     (GPIO_MODE_IT_RISING)
#define USRSW_PRESSED       (1)

/* LED */
#define PYB_LED1        (pin_D14) // red
#define PYB_LED2        (pin_D12) // green
#define PYB_LED3        (pin_D13) // orange
#define PYB_LED4        (pin_D15) // blue

#define PYB_OTYPE       (GPIO_MODE_OUTPUT_PP)

#define PYB_LED_ON(pin)  (pin->gpio->BSRRL = pin->pin_mask)
#define PYB_LED_OFF(pin) (pin->gpio->BSRRH = pin->pin_mask)

