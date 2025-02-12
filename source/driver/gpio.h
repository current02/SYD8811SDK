#ifndef _GPIO__H__
#define _GPIO__H__

#include "ARMCM0.h"
#include "lib.h"

extern PIN_CONFIG_TYPE *	PIN_CONFIG;
extern GPIO_CTRL_TYPE * GPIO_CTRL;  	 //GPIO���ƼĴ���
extern GPO_CTRL_TYPE *	GPO_CTRL;  	 	 //GPIO������ƼĴ���
extern GPI_CTRL_TYPE *	GPI_CTRL;		 //GPIO������ƼĴ���
extern GPIO_IRQ_CTRL_TYPE * GPIO_IRQ_CTRL;

void gpio_init_lowpower(void);
void PIN_Set_GPIO(uint32_t io,uint8_t fun);
void PIN_Pullup_Enable(enum _QFN_TYPE_ type, uint32_t io);
void PIN_Pullup_Disable(enum _QFN_TYPE_ type, uint32_t io);
void GPIO_Set_Output(uint32_t io);
void GPIO_Set_Input(uint32_t io, uint32_t invert_bits);
void GPIO_Input_Enable(uint32_t io);
void GPIO_Input_Disable(uint32_t io);
void GPIO_Pin_Set(uint32_t io);
void GPIO_Pin_Clear(uint32_t io);
void GPIO_Pin_Turn(uint32_t io);
uint32_t GPIO_Pin_Read(uint32_t io);
void io_irq_enable(uint32_t io, void *  p_callback);
void io_irq_disable(uint32_t io);
void io_irq_disable_all(void);

#endif

