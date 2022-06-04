/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18LF47K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED1 aliases
#define LED1_TRIS                 TRISAbits.TRISA0
#define LED1_LAT                  LATAbits.LATA0
#define LED1_PORT                 PORTAbits.RA0
#define LED1_WPU                  WPUAbits.WPUA0
#define LED1_OD                   ODCONAbits.ODCA0
#define LED1_ANS                  ANSELAbits.ANSELA0
#define LED1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED1_GetValue()           PORTAbits.RA0
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA1
#define LED2_LAT                  LATAbits.LATA1
#define LED2_PORT                 PORTAbits.RA1
#define LED2_WPU                  WPUAbits.WPUA1
#define LED2_OD                   ODCONAbits.ODCA1
#define LED2_ANS                  ANSELAbits.ANSELA1
#define LED2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED2_GetValue()           PORTAbits.RA1
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set Cancel_button aliases
#define Cancel_button_TRIS                 TRISAbits.TRISA3
#define Cancel_button_LAT                  LATAbits.LATA3
#define Cancel_button_PORT                 PORTAbits.RA3
#define Cancel_button_WPU                  WPUAbits.WPUA3
#define Cancel_button_OD                   ODCONAbits.ODCA3
#define Cancel_button_ANS                  ANSELAbits.ANSELA3
#define Cancel_button_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define Cancel_button_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define Cancel_button_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define Cancel_button_GetValue()           PORTAbits.RA3
#define Cancel_button_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define Cancel_button_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define Cancel_button_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define Cancel_button_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define Cancel_button_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define Cancel_button_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define Cancel_button_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define Cancel_button_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set Add_button aliases
#define Add_button_TRIS                 TRISBbits.TRISB0
#define Add_button_LAT                  LATBbits.LATB0
#define Add_button_PORT                 PORTBbits.RB0
#define Add_button_WPU                  WPUBbits.WPUB0
#define Add_button_OD                   ODCONBbits.ODCB0
#define Add_button_ANS                  ANSELBbits.ANSELB0
#define Add_button_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Add_button_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Add_button_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Add_button_GetValue()           PORTBbits.RB0
#define Add_button_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Add_button_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Add_button_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Add_button_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Add_button_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define Add_button_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define Add_button_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define Add_button_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set Delete_button aliases
#define Delete_button_TRIS                 TRISBbits.TRISB1
#define Delete_button_LAT                  LATBbits.LATB1
#define Delete_button_PORT                 PORTBbits.RB1
#define Delete_button_WPU                  WPUBbits.WPUB1
#define Delete_button_OD                   ODCONBbits.ODCB1
#define Delete_button_ANS                  ANSELBbits.ANSELB1
#define Delete_button_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Delete_button_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Delete_button_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Delete_button_GetValue()           PORTBbits.RB1
#define Delete_button_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Delete_button_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Delete_button_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Delete_button_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Delete_button_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define Delete_button_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define Delete_button_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define Delete_button_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set Up_button aliases
#define Up_button_TRIS                 TRISBbits.TRISB2
#define Up_button_LAT                  LATBbits.LATB2
#define Up_button_PORT                 PORTBbits.RB2
#define Up_button_WPU                  WPUBbits.WPUB2
#define Up_button_OD                   ODCONBbits.ODCB2
#define Up_button_ANS                  ANSELBbits.ANSELB2
#define Up_button_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Up_button_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Up_button_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Up_button_GetValue()           PORTBbits.RB2
#define Up_button_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Up_button_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Up_button_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Up_button_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Up_button_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define Up_button_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define Up_button_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define Up_button_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set Down_button aliases
#define Down_button_TRIS                 TRISBbits.TRISB3
#define Down_button_LAT                  LATBbits.LATB3
#define Down_button_PORT                 PORTBbits.RB3
#define Down_button_WPU                  WPUBbits.WPUB3
#define Down_button_OD                   ODCONBbits.ODCB3
#define Down_button_ANS                  ANSELBbits.ANSELB3
#define Down_button_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Down_button_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Down_button_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Down_button_GetValue()           PORTBbits.RB3
#define Down_button_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Down_button_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Down_button_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define Down_button_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define Down_button_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define Down_button_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define Down_button_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define Down_button_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set Lock aliases
#define Lock_TRIS                 TRISBbits.TRISB4
#define Lock_LAT                  LATBbits.LATB4
#define Lock_PORT                 PORTBbits.RB4
#define Lock_WPU                  WPUBbits.WPUB4
#define Lock_OD                   ODCONBbits.ODCB4
#define Lock_ANS                  ANSELBbits.ANSELB4
#define Lock_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Lock_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Lock_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Lock_GetValue()           PORTBbits.RB4
#define Lock_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Lock_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Lock_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Lock_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Lock_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define Lock_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define Lock_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define Lock_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RW aliases
#define RW_TRIS                 TRISDbits.TRISD1
#define RW_LAT                  LATDbits.LATD1
#define RW_PORT                 PORTDbits.RD1
#define RW_WPU                  WPUDbits.WPUD1
#define RW_OD                   ODCONDbits.ODCD1
#define RW_ANS                  ANSELDbits.ANSELD1
#define RW_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define RW_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define RW_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define RW_GetValue()           PORTDbits.RD1
#define RW_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define RW_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define RW_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define RW_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define RW_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define RW_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define RW_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define RW_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS                 TRISDbits.TRISD2
#define RS_LAT                  LATDbits.LATD2
#define RS_PORT                 PORTDbits.RD2
#define RS_WPU                  WPUDbits.WPUD2
#define RS_OD                   ODCONDbits.ODCD2
#define RS_ANS                  ANSELDbits.ANSELD2
#define RS_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define RS_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define RS_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define RS_GetValue()           PORTDbits.RD2
#define RS_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define RS_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define RS_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define RS_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define RS_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define RS_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define RS_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set EN aliases
#define EN_TRIS                 TRISDbits.TRISD3
#define EN_LAT                  LATDbits.LATD3
#define EN_PORT                 PORTDbits.RD3
#define EN_WPU                  WPUDbits.WPUD3
#define EN_OD                   ODCONDbits.ODCD3
#define EN_ANS                  ANSELDbits.ANSELD3
#define EN_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define EN_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define EN_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define EN_GetValue()           PORTDbits.RD3
#define EN_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define EN_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define EN_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define EN_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define EN_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define EN_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define EN_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define EN_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS                 TRISDbits.TRISD4
#define D4_LAT                  LATDbits.LATD4
#define D4_PORT                 PORTDbits.RD4
#define D4_WPU                  WPUDbits.WPUD4
#define D4_OD                   ODCONDbits.ODCD4
#define D4_ANS                  ANSELDbits.ANSELD4
#define D4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define D4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define D4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define D4_GetValue()           PORTDbits.RD4
#define D4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define D4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define D4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS                 TRISDbits.TRISD5
#define D5_LAT                  LATDbits.LATD5
#define D5_PORT                 PORTDbits.RD5
#define D5_WPU                  WPUDbits.WPUD5
#define D5_OD                   ODCONDbits.ODCD5
#define D5_ANS                  ANSELDbits.ANSELD5
#define D5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define D5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define D5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define D5_GetValue()           PORTDbits.RD5
#define D5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define D5_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define D5_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define D5_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define D5_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define D5_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define D5_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set D6 aliases
#define D6_TRIS                 TRISDbits.TRISD6
#define D6_LAT                  LATDbits.LATD6
#define D6_PORT                 PORTDbits.RD6
#define D6_WPU                  WPUDbits.WPUD6
#define D6_OD                   ODCONDbits.ODCD6
#define D6_ANS                  ANSELDbits.ANSELD6
#define D6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define D6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define D6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define D6_GetValue()           PORTDbits.RD6
#define D6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define D6_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define D6_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define D6_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define D6_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define D6_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define D6_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set D7 aliases
#define D7_TRIS                 TRISDbits.TRISD7
#define D7_LAT                  LATDbits.LATD7
#define D7_PORT                 PORTDbits.RD7
#define D7_WPU                  WPUDbits.WPUD7
#define D7_OD                   ODCONDbits.ODCD7
#define D7_ANS                  ANSELDbits.ANSELD7
#define D7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define D7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define D7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define D7_GetValue()           PORTDbits.RD7
#define D7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define D7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define D7_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define D7_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define D7_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define D7_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define D7_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define D7_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

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