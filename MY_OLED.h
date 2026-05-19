#include "main.h"
#include "i2c.h"

#ifndef __MY_OLED_H__
#define __MY_OLED_H__

void MY_OLED_Command(uint8_t Command);
void MY_OLED_CommandM(uint8_t Command[], int Num);
void MY_OLED_Data(uint8_t Data);
void MY_OLED_DataM(uint8_t Data[], int Num);
void MY_OLED_SetCursor(uint8_t x, uint8_t y);
void MY_OLED_Full(uint8_t data);
void MY_OLED_ShowP(uint8_t data[], int _Long, int _Hight, int _X, int _Y);
void MY_OLED_Clear(void);
void MY_OLED_Init(void);
void MY_OLED_ShowCH(int X, int Y, const uint8_t List[][32], int o);
void MY_OLED_ShowSE(char StrE[], int X, int Y);
void MY_OLED_ShowFS(float num, int sn, int x, int y);

extern const uint8_t OLED_F8x16[][16];
extern const uint8_t OLED_Chinese0[][32];


#endif
