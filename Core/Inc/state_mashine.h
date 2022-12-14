#ifndef __STATE_MASHINE_H
#define __LCD_H


/*Прототипи ф-й обробників станів машини*/
void empty_function(void);
void print_freq_hanler(void);
void print_menu_hanler(void);
void menu_up_hanler(void);
void menu_down_hanler(void);
typedef enum {
	STATE_PRINT_FREQ,
	STATE_SET_STEP,
	STATE_SET_INTERMEDIATE_FREQ,
	STATE_PRINT_MENU,
} STATE_t;

typedef enum {
	EVENT_NONE,
	EVENT_BUTTON_PRESSED,
	EVENT_ENC_CLOCK,
	EVENT_ENC_COUNTERCLOCK,
	ENENT_TIME_OUT,
} EVENT_t;

#endif
