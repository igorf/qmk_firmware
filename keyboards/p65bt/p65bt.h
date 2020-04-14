#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K010, K011, K012, K013, K014, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K110, K111, K112, K113, K114, \
	K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K210, K211, K212, K213, \
	K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K310, K311, K312, K313, \
	K40, K41, K42, K43, K44, K45, K46, K47, K48, K49 \
) { \
	{ K00,	K01,	K02, 	K03, 	K04, 	K05, 	K06, 	K07, 	K08, 	K09, 	K010, 	K011, 	K012, 	K013, 	K014}, \
	{ K10, 	K11, 	K12, 	K13, 	K14, 	K15, 	K16, 	K17, 	K18, 	K19, 	K110, 	K111, 	K112, 	K113, 	K114}, \
	{ K20, 	K21, 	K22, 	K23, 	K24, 	K25, 	K26, 	K27, 	K28, 	K29, 	K210, 	K211,  	KC_NO,	K212, 	K213}, \
	{ K30, 	KC_NO,	K31, 	K32, 	K33, 	K34, 	K35, 	K36, 	K37, 	K38, 	K39, 	K310, 	K311, 	K312, 	K313}, \
	{ K40, 	K41, 	K42, 	KC_NO,	KC_NO,	KC_NO,	K43, 	KC_NO,	KC_NO,	K44, 	K45, 	K46, 	K47, 	K48, 	K49} \
}

extern uint8_t expander_status;
extern uint8_t expander_input_pin_mask;
extern bool i2c_initialized;

void init_expander(void);

#endif