#include "mcc_generated_files/mcc.h"
//#include <stdio.h>
#include <stdlib.h> //for rand())
//#include "splunk.h"

/*
                         Main application
 */
void light(int l7,int l6,int l5,int l4,int l3,int l2,int l1,unsigned int d);
void delay_ms(unsigned int milliseconds);

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    typedef enum // define the modes for the state machine
    {
        SLEEP,
        ON, 
        BLINK_SLOW,
        BLINK_FAST,
        RUN,
        RANDOM,
        RAILROAD,
        TAE,
        RBLINK
    } state_type;
    
    int button_pushed = 0;
    state_type state = SLEEP;
    int dotDelay = 8;
    int spaceDelay = 16; 
    int randomnumber;
    char string[] = "Congrats on getting here!  Not gonna find much here.";
    
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        // Add your application code
        if(button1_GetValue()==0) //check for button push
        {
            delay_ms(5); //debounce a switch depress
            while (button1_GetValue()==0) //holding down button
            {
                led1_SetHigh();
                led2_SetHigh();
                led3_SetHigh();
                led4_SetHigh();
                led5_SetHigh();
                led6_SetHigh();
                led7_SetHigh();
                button_pushed=1;
            }
            led1_SetLow();
            led2_SetLow();
            led3_SetLow();
            led4_SetLow();
            led5_SetLow();
            led6_SetLow();
            led7_SetLow();
        }
        
        if (button_pushed) // button pushed
		{
			switch (state)
      		{
				case SLEEP:
					state = ON;
					break;
        		case ON:
          			state = BLINK_SLOW;
          			break;
        		case BLINK_SLOW:
          			state = BLINK_FAST;
          			break;
                case BLINK_FAST:
          			state = RUN;
          			break;
        		case RUN:
					state = RANDOM;
					break;
				case RANDOM:
          			state = RAILROAD;
                    break;
                case RAILROAD:
          			state = TAE;
          			break;
                case TAE:
                    state = RBLINK;
                    break;
                case RBLINK:
                    state = SLEEP;
                    break;
      		}
			button_pushed = 0;
        }
        
        switch (state)
        {
         	case ON:			// turn on LEDs
				led1_SetHigh();
                led2_SetHigh();
                led3_SetHigh();
                led4_SetHigh();
                led5_SetHigh();
                led6_SetHigh();
                led7_SetHigh();
            	break;
          	case BLINK_SLOW:				// blink LEDs
                led1_Toggle();
                led2_Toggle();
                led3_Toggle();
                led4_Toggle();
                led5_Toggle();
                led6_Toggle();
                led7_Toggle();
                delay_ms(1000);
                break;
            case BLINK_FAST:				// blink LEDs
            	led1_Toggle();
                led2_Toggle();
                led3_Toggle();
                led4_Toggle();
                led5_Toggle();
                led6_Toggle();
                led7_Toggle();
                delay_ms(100);
            	break;
          	case RUN:				// bouncing ball
            	led1_SetHigh();
                led2_SetLow();
                led3_SetLow();
                led4_SetLow();
                led5_SetLow();
                led6_SetLow();
                led7_SetLow();
                delay_ms(100);
                led1_SetLow();
                led2_SetHigh();
                led3_SetLow();
                led4_SetLow();
                led5_SetLow();
                led6_SetLow();
                led7_SetLow();
                delay_ms(100);
                led1_SetLow();
                led2_SetLow();
                led3_SetHigh();
                led4_SetLow();
                led5_SetLow();
                led6_SetLow();
                led7_SetLow();
                delay_ms(100);
                led1_SetLow();
                led2_SetLow();
                led3_SetLow();
                led4_SetHigh();
                led5_SetLow();
                led6_SetLow();
                led7_SetLow();
                delay_ms(100);
                led1_SetLow();
                led2_SetLow();
                led3_SetLow();
                led4_SetLow();
                led5_SetHigh();
                led6_SetLow();
                led7_SetLow();
                delay_ms(100);
                led1_SetLow();
                led2_SetLow();
                led3_SetLow();
                led4_SetLow();
                led5_SetLow();
                led6_SetHigh();
                led7_SetLow();
                delay_ms(100);
                led1_SetLow();
                led2_SetLow();
                led3_SetLow();
                led4_SetLow();
                led5_SetLow();
                led6_SetLow();
                led7_SetHigh();
                delay_ms(100);
            	break;
		  case RANDOM:	
              led1_Toggle();
              delay_ms(5+ (rand() % 300));
              led2_Toggle();
               delay_ms(5+ (rand() % 300));
              led3_Toggle();
               delay_ms(5+ (rand() % 300));
              led4_Toggle();
               delay_ms(5+ (rand() % 300));
              led5_Toggle();
               delay_ms(5+ (rand() % 300));
              led6_Toggle();
               delay_ms(5+ (rand() % 300));
              led7_Toggle();
               delay_ms(5+ (rand() % 300));
              break;
          case RAILROAD:			
              led1_SetHigh();
              led2_SetLow();
              led3_SetHigh();
              led4_SetLow();
              led5_SetHigh();
              led6_SetLow();
              led7_SetHigh();
              delay_ms(200);
              led1_SetLow();
              led2_SetHigh();
              led3_SetLow();
              led4_SetHigh();
              led5_SetLow();
              led6_SetHigh();
              led7_SetLow();
              delay_ms(200);
              break;  
          case TAE:
              light(1,0,0,0,0,0,0,dotDelay);  //T
              light(1,0,0,0,0,0,0,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(1,0,0,0,0,0,0,dotDelay);
              light(1,0,0,0,0,0,0,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //char space
              light(1,1,1,1,1,1,1,dotDelay);  //A
              light(1,0,0,1,0,0,0,dotDelay);
              light(1,0,0,1,0,0,0,dotDelay);
              light(1,0,0,1,0,0,0,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //E
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,0,0,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //B
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,0,0,1,dotDelay);
              light(0,1,1,0,1,1,0,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //O
              light(1,0,0,0,0,0,1,dotDelay);
              light(1,0,0,0,0,0,1,dotDelay);
              light(1,0,0,0,0,0,1,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //N
              light(0,1,1,0,0,0,1,dotDelay);
              light(0,0,0,1,0,0,0,dotDelay);
              light(0,0,0,0,1,1,0,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //G
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,1,1,1,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //G
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,1,1,1,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //A
              light(1,0,0,1,0,0,0,dotDelay);
              light(1,0,0,1,0,0,0,dotDelay);
              light(1,0,0,1,0,0,0,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //N
              light(0,1,1,0,0,0,1,dotDelay);
              light(0,0,0,1,0,0,0,dotDelay);
              light(0,0,0,0,1,1,0,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(1,1,1,1,1,1,1,dotDelay);  //G
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,0,0,1,dotDelay);
              light(1,0,0,1,1,1,1,dotDelay);
              light(1,1,1,1,1,1,1,dotDelay);
              light(0,0,0,0,0,0,0,spaceDelay);  //Char space
              light(0,0,0,0,0,0,0,2000);  //Word space
              break;
          case RBLINK:				// blink LEDs
                randomnumber = 1+ (rand() % 7);
                if(randomnumber==7){
                    led7_Toggle();
                }
                else if(randomnumber==6){
                    led6_Toggle();
                }
                else if(randomnumber==5){
                    led5_Toggle();
                }
                else if(randomnumber==4){
                    led4_Toggle();
                }
                else if(randomnumber==3){
                    led3_Toggle();
                }
                else if(randomnumber==2){
                    led2_Toggle();
                }
                else {
                    led1_Toggle();
                }
                delay_ms(50);
                break;
          case SLEEP:
              led1_SetLow();
              led2_SetLow();
              led3_SetLow();
              led4_SetLow();
              led5_SetLow();
              led6_SetLow();
              led7_SetLow();
              break;
		  default:
				break; 
        } //switch
    }//while
}//main

void delay_ms(unsigned int milliseconds)
{
   while(milliseconds > 0)
   {
      milliseconds--;
       __delay_us(990);
   }
}

void light(int l7,int l6,int l5,int l4,int l3,int l2,int l1,unsigned int d)
{
    if(l7){
              led7_SetHigh();
    }
    else{
              led7_SetLow();
    }
    if(l6){
              led6_SetHigh();
    }
    else{
              led6_SetLow();
    }
    if(l5){
              led5_SetHigh();
    }
    else{
              led5_SetLow();
    }
    if(l4){
              led4_SetHigh();
    }
    else{
              led4_SetLow();
    }
    if(l3){
              led3_SetHigh();
    }
    else{
              led3_SetLow();
    }
    if(l2){
              led2_SetHigh();
    }
    else{
              led2_SetLow();
    }
    if(l1){
              led1_SetHigh();
    }
    else{
              led1_SetLow();
    }
    delay_ms(d);
}
/**
 End of File
*/