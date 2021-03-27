#include "single_rotary.h"
#include "outputselect.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(KC_MPLY)
};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) {
      tap_code(KC_VOLU);
  } else {
      tap_code(KC_VOLD);
  }
}

void matrix_init_user(void) {
	set_output(OUTPUT_AUTO);
}