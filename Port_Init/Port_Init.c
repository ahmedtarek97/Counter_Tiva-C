#include "tm4c123gh6pm.h"
#define GPIO_SETALLPINS_M				0xFFU 
#define GPIO_PCTL_M									0x00000000U



//input: the index of the port that neede to be intiated   output: void

 void Port_Init(uint8 port_index  )
 {
	 volatile unsigned long delay;
	 if(port_index==5)
	 {
	  SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;
		delay = SYSCTL_RCGCGPIO_R;
		GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY; 
		GPIO_PORTF_CR_R |= GPIO_SETALLPINS_M; 
		GPIO_PORTF_AMSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTF_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTF_AFSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTF_DEN_R |= GPIO_SETALLPINS_M;
	 
	 }
	 
	 else if(port_index==4)
	 {
	  SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R4;
		delay = SYSCTL_RCGCGPIO_R;
		GPIO_PORTE_LOCK_R = GPIO_LOCK_KEY; 
		GPIO_PORTE_CR_R |= GPIO_SETALLPINS_M; 
		GPIO_PORTE_AMSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTE_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTE_AFSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTE_DEN_R |= GPIO_SETALLPINS_M;
	 
	 }
	 
	 
	 else if(port_index==3)
	 {
	  SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R3;
		delay = SYSCTL_RCGCGPIO_R;
		GPIO_PORTD_LOCK_R = GPIO_LOCK_KEY; 
		GPIO_PORTD_CR_R |= GPIO_SETALLPINS_M; 
		GPIO_PORTD_AMSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTD_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTD_AFSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTD_DEN_R |= GPIO_SETALLPINS_M;
	 
	 }
	 
	 
	 else if(port_index==2)
	 {
	  SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R2;
		delay = SYSCTL_RCGCGPIO_R;
		GPIO_PORTC_LOCK_R = GPIO_LOCK_KEY; 
		GPIO_PORTC_CR_R |= GPIO_SETALLPINS_M; 
		GPIO_PORTC_AMSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTC_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTC_AFSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTC_DEN_R |= GPIO_SETALLPINS_M;
	 
	 }
	 
	 else if(port_index==1)
	 {
	  SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R1;
		delay = SYSCTL_RCGCGPIO_R;
		GPIO_PORTB_LOCK_R = GPIO_LOCK_KEY; 
		GPIO_PORTB_CR_R |= GPIO_SETALLPINS_M; 
		GPIO_PORTB_AMSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTB_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTB_AFSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTB_DEN_R |= GPIO_SETALLPINS_M;
	 
	 }
	 
	 
	 else if(port_index==0)
	 {
	  SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R0;
		delay = SYSCTL_RCGCGPIO_R;
		GPIO_PORTA_LOCK_R = GPIO_LOCK_KEY; 
		GPIO_PORTA_CR_R |= GPIO_SETALLPINS_M; 
		GPIO_PORTA_AMSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTA_PCTL_R = GPIO_PCTL_M	;
		GPIO_PORTA_AFSEL_R &= ~GPIO_SETALLPINS_M;
		GPIO_PORTA_DEN_R |= GPIO_SETALLPINS_M;
	 
	 }
	 
	 
	 
	 
 }