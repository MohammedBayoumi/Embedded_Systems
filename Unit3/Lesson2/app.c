#include "uart.h"
unsigned char String_buffer[100]="Mohamed_Bayoufdvdmi";
void main (void)
{
	Uart_Send_String(&String_buffer[0]);
}