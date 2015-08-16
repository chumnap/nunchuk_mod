/*
 * conf_general.h
 *
 *  Created on: 16 aug 2015
 *      Author: benjamin
 */

#ifndef CONF_GENERAL_H_
#define CONF_GENERAL_H_

// Choose hardware version
//#define HW_KAMA
#define HW_JACOB

#ifdef HW_KAMA
#define ADC_IND_CHUK_PX			3
#define ADC_IND_CHUK_PY			2
#define ADC_INVERT_PX			0
#define ADC_INVERT_PY			0

// NRF Pins
#define PORT_CE		GPIOA
#define PIN_CE		3
#define PORT_CSN	GPIOA
#define PIN_CSN		4
#define PORT_SCK	GPIOA
#define PIN_SCK		5
#define PORT_MOSI	GPIOA
#define PIN_MOSI	6
#define PORT_MISO	GPIOA
#define PIN_MISO	7

// Grounding pins
#define CHUK_P1_GND_PORT		GPIOB
#define CHUK_P1_GND_PIN			6
#define CHUK_P2_GND_PORT		GPIOA
#define CHUK_P2_GND_PIN			11

// Buttons
#define CHUK_BT_Z_PORT			GPIOB
#define CHUK_BT_Z_PIN			5
#define CHUK_BT_C_PORT			GPIOB
#define CHUK_BT_C_PIN			7
#define CHUK_BT_PUSH_PORT		GPIOA
#define CHUK_BT_PUSH_PIN		2

// Address pins
#define ADDR0_PORT				GPIOA
#define ADDR0_PIN				14
#define ADDR1_PORT				GPIOA
#define ADDR1_PIN				15
#define ADDR2_PORT				GPIOB
#define ADDR2_PIN				3
#define ADDR3_PORT				GPIOB
#define ADDR3_PIN				4

#elif defined HW_JACOB

#define ADC_IND_CHUK_PX			2
#define ADC_IND_CHUK_PY			3
#define ADC_INVERT_PX			1
#define ADC_INVERT_PY			1

// NRF Pins
#define PORT_CE		GPIOA
#define PIN_CE		3
#define PORT_CSN	GPIOA
#define PIN_CSN		4
#define PORT_SCK	GPIOA
#define PIN_SCK		5
#define PORT_MOSI	GPIOA
#define PIN_MOSI	6
#define PORT_MISO	GPIOA
#define PIN_MISO	7

// Grounding pins
#define CHUK_P1_GND_PORT		GPIOB
#define CHUK_P1_GND_PIN			6
#define CHUK_P2_GND_PORT		GPIOA
#define CHUK_P2_GND_PIN			11

// Buttons
#define CHUK_BT_Z_PORT			GPIOB
#define CHUK_BT_Z_PIN			5
#define CHUK_BT_C_PORT			GPIOB
#define CHUK_BT_C_PIN			7
#define CHUK_BT_PUSH_PORT		GPIOA
#define CHUK_BT_PUSH_PIN		2

// Address pins
#define ADDR0_PORT				GPIOA
#define ADDR0_PIN				14
#define ADDR1_PORT				GPIOA
#define ADDR1_PIN				15
#define ADDR2_PORT				GPIOB
#define ADDR2_PIN				3
#define ADDR3_PORT				GPIOB
#define ADDR3_PIN				4
#endif

#endif /* CONF_GENERAL_H_ */