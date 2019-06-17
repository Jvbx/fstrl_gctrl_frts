/*
 * gkt_LCD.h
 *
 *  Created on: May 19, 2019
 *      Author: jvbx0
 */

#ifndef __GKT_LCD_H_
#define __GKT_LCD_H_

#include <stdbool.h>
#include <stdint.h>
#include <string.h>


typedef enum { LCD_PRNT        = (int8_t) 0x00,
               LCD_CLR         = (int8_t) 0x01,
               LCD_SET_POS     = (int8_t) 0x80,
               LCD_CUR_ON      = (int8_t) 0x81,
               LCD_CUR_BLINK   = (int8_t) 0x82,
               LCD_INIT        = (int8_t) 0x84,
               LCD_ON          = (int8_t) 0x90,
               LCD_OFF         = (int8_t) 0xA0,

             } lcd_cmd_t;


typedef struct {
     uint8_t   pos_x;
     uint8_t   pos_y;
     lcd_cmd_t cmd;
     char      data[32];
} lcd_msg_t;




#endif /* __GKT_LCD_H_ */
