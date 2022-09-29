#ifndef __STATE_MASHINE_H
#define __STATE_MASHINE_H

#define STATE_MAX 20
#define EVENT_MAX 4

/*Прототипи ф-й обробників станів машини*/
void empty_function(void);
void print_main_menu_hanler(void);
void print_component_tester_menu_hanler(void);
void print_generator_menu_hanler(void);
void generate_freq_handler(void);
void reset_enc_rot_flag(void);

typedef enum {
	STATE_PRINT_MAIN_MENU,
	STATE_GENERATE_FREQ,
	STATE_PRINT_COMPONENT_TESTER_MENU,
	STATE_PRINT_GENERATOR_MENU,
} STATE_t;

typedef enum{
	ENCODER_CLOCK,
	ENCODER_COUNTERCLOCK,
	ENCODER_BTN_PRESSED,
	ENCODER_NONE,

}ENCODER_STATE_t;

typedef enum {
	EVENT_NONE,
	EVENT_BUTTON_PRESSED,
	EVENT_ENC_CLOCK,
	EVENT_ENC_COUNTERCLOCK,
	ENENT_TIME_OUT,
} EVENT_t;

#endif
