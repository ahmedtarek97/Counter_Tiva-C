

#include "Port_SetPinDirection.h"
#define GPIO_PCTL_M									0x00000000U
#define GPIO_PCTL_PE3210_M  (GPIO_PCTL_PE3_M | GPIO_PCTL_PE2_M | GPIO_PCTL_PE1_M |  GPIO_PCTL_PE0_M) 
#define GPIO_PCTL_PB3210_M  (GPIO_PCTL_PB3_M | GPIO_PCTL_PB2_M | GPIO_PCTL_PB1_M |  GPIO_PCTL_PB0_M) 
#define GPIO_PCTL_PD3210_M  (GPIO_PCTL_PD3_M | GPIO_PCTL_PD2_M | GPIO_PCTL_PD1_M |  GPIO_PCTL_PD0_M) 
#define GPIO_PCTL_PA432_M  (GPIO_PCTL_PA4_M | GPIO_PCTL_PA3_M | GPIO_PCTL_PA2_M) 


//input: the index of the port that neede to be intiated   output: void

void Port_SetPinDirection(uint8 port_index ,uint8 pins_mask,enum Port_PinDirectionType pins_direction )
 {
	 volatile unsigned long delay;
	 if(port_index==5)
	 {
	  Port_Init(5) ;
		GPIO_PORTF_CR_R |= pins_mask; 
		GPIO_PORTF_AMSEL_R &= ~pins_mask;
		GPIO_PORTF_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTF_AFSEL_R &= ~pins_mask;
		GPIO_PORTF_DEN_R |= pins_mask;
	 if(pins_direction)
		 GPIO_PORTF_DIR_R |= pins_mask; 
		  else 
		 GPIO_PORTF_DIR_R &= ~pins_mask; 
	 }
	 
	 else if(port_index==4)
	 {
	 Port_Init(4) ;
		GPIO_PORTE_CR_R |= pins_mask; 
		GPIO_PORTE_AMSEL_R &= ~pins_mask;
		GPIO_PORTE_PCTL_R= GPIO_PCTL_M		;
		GPIO_PORTE_AFSEL_R &= ~pins_mask;
		GPIO_PORTE_DEN_R |= pins_mask;
		if(pins_direction)
		 GPIO_PORTE_DIR_R |= pins_mask; 
		  else 
		 GPIO_PORTE_DIR_R &= ~pins_mask; 
	 
	 }
	 
	 
	 else if(port_index==3)
	 {
		Port_Init(3) ; 
		GPIO_PORTD_CR_R |= pins_mask; 
		GPIO_PORTD_AMSEL_R &= ~pins_mask;
		GPIO_PORTD_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTD_AFSEL_R &= ~pins_mask;
		GPIO_PORTD_DEN_R |= pins_mask;
		 if(pins_direction)
		 GPIO_PORTD_DIR_R |= pins_mask; 
		  else 
		 GPIO_PORTD_DIR_R &= ~pins_mask;  
	 
	 }
	 
	 
	 else if(port_index==2)
	 {
	  Port_Init(2) ; 
		GPIO_PORTC_CR_R |= pins_mask; 
		GPIO_PORTC_AMSEL_R &= ~pins_mask;
		GPIO_PORTC_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTC_AFSEL_R &= ~pins_mask;
		GPIO_PORTC_DEN_R |= pins_mask;
		if(pins_direction)
		 GPIO_PORTC_DIR_R |= pins_mask; 
		  else 
		 GPIO_PORTC_DIR_R &= ~pins_mask; 
	 
	 }
	 
	 else if(port_index==1)
	 {
	  Port_Init(1) ;
		GPIO_PORTB_CR_R |= pins_mask; 
		GPIO_PORTB_AMSEL_R &= ~pins_mask;
		GPIO_PORTB_PCTL_R = GPIO_PCTL_M		;
		GPIO_PORTB_AFSEL_R &= ~pins_mask;
		GPIO_PORTB_DEN_R |= pins_mask;
		 if(pins_direction)
		 GPIO_PORTB_DIR_R |= pins_mask; 
		  else 
		 GPIO_PORTB_DIR_R &= ~pins_mask; 
	 
	 }
	 
	 
	 else if(port_index==0)
	 {
	  Port_Init(0) ; 
		GPIO_PORTA_CR_R |= pins_mask; 
		GPIO_PORTA_AMSEL_R &= ~pins_mask;
		GPIO_PORTA_PCTL_R = GPIO_PCTL_M	 ;
		GPIO_PORTA_AFSEL_R &= ~pins_mask;
		GPIO_PORTA_DEN_R |= pins_mask;
		 if(pins_direction)
		 GPIO_PORTA_DIR_R |= pins_mask; 
		  else 
		 GPIO_PORTA_DIR_R &= ~pins_mask; 
	 
	 }
	 
	 
	 
	 
 }
 
 