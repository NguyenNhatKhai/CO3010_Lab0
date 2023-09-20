/*
 * software_timer.c
 *
 *  Created on: Sep 19, 2023
 *      Author: Nhat Khai
 */

#include "software_timer.h"

int timer0R_counter = 0;
int timer0G_counter = 0;
int timer0Y_counter = 0;
int timer1R_counter = 0;
int timer1G_counter = 0;
int timer1Y_counter = 0;
int timer0R_flag = 0;
int timer0G_flag = 0;
int timer0Y_flag = 0;
int timer1R_flag = 0;
int timer1G_flag = 0;
int timer1Y_flag = 0;

void setTimer0R(int duration) {
	timer0R_counter = duration;
	timer0R_flag = 0;
}
void setTimer0G(int duration) {
	timer0G_counter = duration;
	timer0G_flag = 0;
}
void setTimer0Y(int duration) {
	timer0Y_counter = duration;
	timer0Y_flag = 0;
}
void setTimer1R(int duration) {
	timer1R_counter = duration;
	timer1R_flag = 0;
}
void setTimer1G(int duration) {
	timer1G_counter = duration;
	timer1G_flag = 0;
}
void setTimer1Y(int duration) {
	timer1Y_counter = duration;
	timer1Y_flag = 0;
}

void runTimer() {
	if (timer0R_counter > 0) {
		timer0R_counter --;
		if (timer0R_counter <= 0) {
			timer0R_flag = 1;
		}
	}
	if (timer0G_counter > 0) {
		timer0G_counter --;
		if (timer0G_counter <= 0) {
			timer0G_flag = 1;
		}
	}
	if (timer0Y_counter > 0) {
		timer0Y_counter --;
		if (timer0Y_counter <= 0) {
			timer0Y_flag = 1;
		}
	}
	if (timer1R_counter > 0) {
		timer1R_counter --;
		if (timer1R_counter <= 0) {
			timer1R_flag = 1;
		}
	}
	if (timer1G_counter > 0) {
		timer1G_counter --;
		if (timer1G_counter <= 0) {
			timer1G_flag = 1;
		}
	}
	if (timer1Y_counter > 0) {
		timer1Y_counter --;
		if (timer1Y_counter <= 0) {
			timer1Y_flag = 1;
		}
	}
}
