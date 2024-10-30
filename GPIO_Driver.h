/*
 * GPIO_Driver.h
 *
 *  Created on: Oct 30, 2024
 *      Author: masd28
 */

#ifndef GPIO_DRIVER_H_
#define GPIO_DRIVER_H_

void gpioInitIn(unsigned int Port, unsigned char Pin);
void gpioInitOut(unsigned int Port, unsigned char Pin);
unsigned char gpioInitStatus(unsigned int Port, unsigned char Pin);
void gpioWrite(unsigned int Port, unsigned char Pin, unsigned char value);

#endif /* GPIO_DRIVER_H_ */
