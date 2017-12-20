/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC16F15325
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set led7 aliases
#define led7_TRIS               TRISAbits.TRISA0
#define led7_LAT                LATAbits.LATA0
#define led7_PORT               PORTAbits.RA0
#define led7_WPU                WPUAbits.WPUA0
#define led7_OD                ODCONAbits.ODCA0
#define led7_ANS                ANSELAbits.ANSA0
#define led7_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define led7_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define led7_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define led7_GetValue()           PORTAbits.RA0
#define led7_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define led7_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define led7_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define led7_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define led7_SetPushPull()    do { ODCONAbits.ODCA0 = 1; } while(0)
#define led7_SetOpenDrain()   do { ODCONAbits.ODCA0 = 0; } while(0)
#define led7_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define led7_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set led6 aliases
#define led6_TRIS               TRISAbits.TRISA1
#define led6_LAT                LATAbits.LATA1
#define led6_PORT               PORTAbits.RA1
#define led6_WPU                WPUAbits.WPUA1
#define led6_OD                ODCONAbits.ODCA1
#define led6_ANS                ANSELAbits.ANSA1
#define led6_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define led6_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define led6_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define led6_GetValue()           PORTAbits.RA1
#define led6_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define led6_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define led6_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define led6_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define led6_SetPushPull()    do { ODCONAbits.ODCA1 = 1; } while(0)
#define led6_SetOpenDrain()   do { ODCONAbits.ODCA1 = 0; } while(0)
#define led6_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define led6_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set led5 aliases
#define led5_TRIS               TRISAbits.TRISA2
#define led5_LAT                LATAbits.LATA2
#define led5_PORT               PORTAbits.RA2
#define led5_WPU                WPUAbits.WPUA2
#define led5_OD                ODCONAbits.ODCA2
#define led5_ANS                ANSELAbits.ANSA2
#define led5_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define led5_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define led5_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define led5_GetValue()           PORTAbits.RA2
#define led5_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define led5_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define led5_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define led5_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define led5_SetPushPull()    do { ODCONAbits.ODCA2 = 1; } while(0)
#define led5_SetOpenDrain()   do { ODCONAbits.ODCA2 = 0; } while(0)
#define led5_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define led5_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set led4 aliases
#define led4_TRIS               TRISCbits.TRISC0
#define led4_LAT                LATCbits.LATC0
#define led4_PORT               PORTCbits.RC0
#define led4_WPU                WPUCbits.WPUC0
#define led4_OD                ODCONCbits.ODCC0
#define led4_ANS                ANSELCbits.ANSC0
#define led4_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define led4_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define led4_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define led4_GetValue()           PORTCbits.RC0
#define led4_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define led4_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define led4_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define led4_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define led4_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define led4_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)
#define led4_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define led4_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set led3 aliases
#define led3_TRIS               TRISCbits.TRISC1
#define led3_LAT                LATCbits.LATC1
#define led3_PORT               PORTCbits.RC1
#define led3_WPU                WPUCbits.WPUC1
#define led3_OD                ODCONCbits.ODCC1
#define led3_ANS                ANSELCbits.ANSC1
#define led3_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define led3_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define led3_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define led3_GetValue()           PORTCbits.RC1
#define led3_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define led3_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define led3_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define led3_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define led3_SetPushPull()    do { ODCONCbits.ODCC1 = 1; } while(0)
#define led3_SetOpenDrain()   do { ODCONCbits.ODCC1 = 0; } while(0)
#define led3_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define led3_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set led2 aliases
#define led2_TRIS               TRISCbits.TRISC2
#define led2_LAT                LATCbits.LATC2
#define led2_PORT               PORTCbits.RC2
#define led2_WPU                WPUCbits.WPUC2
#define led2_OD                ODCONCbits.ODCC2
#define led2_ANS                ANSELCbits.ANSC2
#define led2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define led2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define led2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define led2_GetValue()           PORTCbits.RC2
#define led2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define led2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define led2_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define led2_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define led2_SetPushPull()    do { ODCONCbits.ODCC2 = 1; } while(0)
#define led2_SetOpenDrain()   do { ODCONCbits.ODCC2 = 0; } while(0)
#define led2_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define led2_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set led1 aliases
#define led1_TRIS               TRISCbits.TRISC3
#define led1_LAT                LATCbits.LATC3
#define led1_PORT               PORTCbits.RC3
#define led1_WPU                WPUCbits.WPUC3
#define led1_OD                ODCONCbits.ODCC3
#define led1_ANS                ANSELCbits.ANSC3
#define led1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define led1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define led1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define led1_GetValue()           PORTCbits.RC3
#define led1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define led1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define led1_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define led1_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define led1_SetPushPull()    do { ODCONCbits.ODCC3 = 1; } while(0)
#define led1_SetOpenDrain()   do { ODCONCbits.ODCC3 = 0; } while(0)
#define led1_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define led1_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set button1 aliases
#define button1_TRIS               TRISCbits.TRISC4
#define button1_LAT                LATCbits.LATC4
#define button1_PORT               PORTCbits.RC4
#define button1_WPU                WPUCbits.WPUC4
#define button1_OD                ODCONCbits.ODCC4
#define button1_ANS                ANSELCbits.ANSC4
#define button1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define button1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define button1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define button1_GetValue()           PORTCbits.RC4
#define button1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define button1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define button1_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define button1_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define button1_SetPushPull()    do { ODCONCbits.ODCC4 = 1; } while(0)
#define button1_SetOpenDrain()   do { ODCONCbits.ODCC4 = 0; } while(0)
#define button1_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define button1_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/