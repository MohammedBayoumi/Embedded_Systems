#include <stdint.h>
#define STACK_START_SP 0x20001000
extern int main(void);

extern unsigned int _E_text;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;


void Rest_Handler (void)
{
	unsigned int DATA_size = (unsigned char*)&_E_DATA -(unsigned char*)&_S_DATA;
	unsigned char* P_src=(unsigned char*)&_E_text;
	unsigned char* P_des=(unsigned char*)&_S_DATA;
	for(int i=0; i<DATA_size;i++)
	{
		*((unsigned char *)P_des++)=*((unsigned char *)P_src++);
	}
	unsigned int bss_size = (unsigned char*)&_E_bss -(unsigned char*)&_S_bss;
	 P_des=(unsigned char*)&_S_bss;
    for(int i=0; i<bss_size;i++)
	{
		*((unsigned char *)P_des++)=(unsigned char )0;
	}
	main();
}
void Default_Handler(void)
{
	Rest_Handler();
}
void NMI_Handler(void) __attribute__((weak,alias("Default_Handler")));
void H_fault_Handler() __attribute__((weak,alias("Default_Handler")));


static unsigned long Stack_top[256];

void (*const g_p_Vectors[])() __attribute__((section(".vectors"))) = {
 (void(*)()) ((unsigned long)Stack_top + sizeof(Stack_top)),
&Rest_Handler,
&NMI_Handler,
&H_fault_Handler
};

