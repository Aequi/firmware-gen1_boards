/*
 * Generic Electric Unicycle firmware
 *
 * Copyright (C) Casainho, 2015.
 *
 * Released under the GPL License, Version 3
 */

unsigned int motor_get_speed (void);
void motor_set_speed (unsigned int speed);
void motor_start (void);
void motor_coast (void);
void motor_set_duty_cycle (int value);
void motor_set_direction (unsigned int direction);
unsigned int motor_get_direction (void);

/*
 * MIN MOTOR SPEED = duty cycle interrupt period of 128ms
 * 833us --> 35km/h; 128ms --> 0.23km/h
 *
 */
