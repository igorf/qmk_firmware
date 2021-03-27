#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFED0
#define PRODUCT_ID      0x6067
#define DEVICE_VER      0x0001
#define MANUFACTURER    i2dev
#define PRODUCT         single_rotary
#define DESCRIPTION     Single rotary encoder

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { F0 } //Marked as A5
#define MATRIX_COL_PINS { B7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
//#define DIODE_DIRECTION COL2ROW
#define DIODE_DIRECTION ROW2COL

/* number of backlight levels */

//#ifdef BACKLIGHT_PIN
//#define BACKLIGHT_LEVELS 3
//#endif
#define BACKLIGHT_LEVELS 6
//#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6

/* Set 0 if debouncing isn't needed */
/* Default debounce is 5 */
#define DEBOUNCE 10
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
#define RGBLIGHT_ANIMATIONS

#define RGBLED_NUM 20
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LIMIT_VAL 0

#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { B5 }
#define ENCODER_RESOLUTION 4

#endif