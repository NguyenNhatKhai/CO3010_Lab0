/*
 * software_timer.h
 *
 *  Created on: Sep 19, 2023
 *      Author: Nhat Khai
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0R_flag;
extern int timer0G_flag;
extern int timer0Y_flag;
extern int timer1R_flag;
extern int timer1G_flag;
extern int timer1Y_flag;

void setTimer0R(int duration);
void setTimer0G(int duration);
void setTimer0Y(int duration);
void setTimer1R(int duration);
void setTimer1G(int duration);
void setTimer1Y(int duration);

void runTimer();

#endif /* INC_SOFTWARE_TIMER_H_ */
