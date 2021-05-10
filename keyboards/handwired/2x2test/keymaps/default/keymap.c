#include "2x2test.h"

#define _QWERTY 0
#define _FN1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT(
		KC_1,    KC_2,
		KC_A,    MO(1)
		),

	[_FN1] = LAYOUT(
		RGB_TOG,  RGB_MOD, 
		KC_B,     KC_TRNS
		),

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRF |= (1 << 5); PORTF &= ~(1 << 5);
	} else {
		DDRF &= ~(1 << 5); PORTF &= ~(1 << 5);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}