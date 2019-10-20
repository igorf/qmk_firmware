#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13, \
	K20, K21, K22, K23, \
	K30, K31, K32, K33  \
) { \
	{ K00,   K01,   K02,   K03 }, \
	{ K10,   K11,   K12,   K13 }, \
	{ K20,   K21,   K22,   K23 }, \
	{ K30,   K31,   K32,   K33 }  \
}

bool mcp23008_init(unsigned char i2cAddress);
bool mcp23008_make_ready(unsigned char i2cAddress);
uint8_t mcp23008_read(unsigned char i2cAddress);
bool mcp23008_enable_interrupts(unsigned char i2cAddress);

#endif