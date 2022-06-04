 /**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18LF47K42
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */

uint8_t User_ID[] = {1,2,3,4,5};
uint8_t Users = 0;


bool Cancel_status(void);
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    UART1_SetRxInterruptHandler(Rx_package_custom);

    Lock_SetLow();
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {
        LCDClearDisplay();
        LCDPrintString("Verifying Pass",1,0);
        
        if(Verifypass()){
            
            LCDClearDisplay();
            LCDPrintString("Verify Sensor",1,0);
            
            if(Handshake()){
                
                LCDClearDisplay();
                LCDPrintString("Place Finger",1,0);
                
               
                /////////////////////////////////////// ADD USER ROUTINE ////////////////////////////////////////////////////
                if(Add_button_GetValue()){
                    
                    while(1){
                        
                        LCDClearDisplay();
                        LCDPrintString("New User",1,0);
                        

                        while(0 == Getfinger()){                                // First time collection
                            LCDPrintString("Place Finger",2,0);
                            
                            if(Cancel_status()){break;}
                        }
                        
                        if(Cancel_status()){break;}
                        LCDClearDisplay();
                        LCDPrintString("Success",1,0);
                        

                        while(0 == Getfinger()){                                // second time collection
                            LCDPrintString("Place Finger",2,0);
                            
                            if(Cancel_status()){break;}
                        }
                        
                        if(Cancel_status()){break;}
                        LCDClearDisplay();
                        LCDPrintString("Success",1,0);
                        

                        if(Gen_char()){                                         // Generate Buffer 1
                            TxPack_Img2Tz[10]++;
                            TxPack_Img2Tz[12]++;
                            
                            if(Gen_char()){                                     // Generate Buffer 2
                                TxPack_Img2Tz[10]--;
                                TxPack_Img2Tz[12]--;
                                
                                if(Gen_Model()){                                //   Generate template from 2 character files
                                   
                                    if(Store_char(User_ID[Users])){
                                        Users++;
                                        break;
                                    }
                                    else{
                                       LCDClearDisplay();
                                        LCDPrintString("Fail to Store",1,0);
                                        
                                        break; 
                                    } 
                                }
                                else{
                                    LCDClearDisplay();
                                    LCDPrintString("Fail to Model",1,0);
                                    
                                    break;
                                }
                            }
                            else{
                                LCDClearDisplay();
                                LCDPrintString("Fail Generate Char",1,0);
                                
                                break;
                            }
                        }
                        else{
                            LCDClearDisplay();
                            LCDPrintString("Fail Generate Char",1,0);
                          
                            break;
                        }
                    }    
                }
                ///////////////////////////////////////END OF ADD USER ROUTINE ////////////////////////////////////////////////////
                
                
                
                
                
                ///////////////////////////////////////DELETE USER ROUTINE ////////////////////////////////////////////////////
                if(Delete_button_GetValue()){                                   //   Check for Delete Command
                    
                    uint8_t Del_user = Users;
                    
                    LCDClearDisplay();
                    LCDPrintString("Delete User:",1,1);
                    LCDPrintChar(Del_user,1,15);
                    LCDPrintString("Press Delete",2,0);
                    
                    __delay_ms(1000);
                    while(1){
                        
                        if(Cancel_status()){break;}
                        if(Up_button_GetValue()){                               //   Select User
                            
                            Del_user++ ;
                            if(Del_user > Users){Del_user = 1;}
                            
                            LCDPrintChar(Del_user,1,15);
                            __delay_ms(250);
                        }
                        if(Down_button_GetValue()){
                            
                            Del_user-- ;
                            if(Del_user > Users){Del_user = Users;}
                            
                            LCDPrintChar(Del_user,1,15);
                            __delay_ms(250);
                        }
                        
                        if(Delete_button_GetValue()){                           //   Delete Selected User
                            
                            if(Delete_Finger(Del_user)){
                                
                                LCDClearDisplay();
                                LCDPrintString("Deleted User:",1,1);
                                LCDPrintChar(Del_user,1,15);
                                
                                break;
                            }
                            else{
                                LCDClearDisplay();
                                LCDPrintString("Failed Delete",1,0);
                                
                                break;
                            }
                        }
                    }
                }
                ///////////////////////////////////////END OF DELETE USER ROUTINE ////////////////////////////////////////////////////
                
                
                
                
                ///////////////////////////////////////DETECTION ROUTINE ////////////////////////////////////////////////////
                if(0 == Getfinger()){
                    LCDClearDisplay();
                    LCDPrintString("Finger Detected",1,0);                      //   Check for finger
                    LCDPrintString("Checking",1,0);
                    
                    
                    if(Gen_char()){                                             //   Generate finger character file
                        
                        if(Search_Finger()){                                    //   Search for finger
                            
                            LCDClearDisplay();
                            LCDPrintString("User Detected:",1,0);
                            LCDPrintChar(Rx_package[11],1,15);
                            LCDPrintString("UNLOCKED:",2,0);
                            
                            Lock_SetHigh();                                     //   Open lock
                            __delay_ms(2000);
                            __delay_ms(2000);
                            Lock_SetLow();
                            //??????? ENTER LOCK OPEN ROUTINE ??????//
                            
                            
                            
                            
                            
                            //??????? ENTER LOCK OPEN ROUTINE ??????//
                            break;
                        }
                        else{
                            LCDClearDisplay();
                            LCDPrintString("Failed Id",1,0);
                            
                            break; 
                        }
                    }
                    else{
                        LCDClearDisplay();
                        LCDPrintString("Failed Id",1,0);
                        
                        break;
                    }  
                }
                ///////////////////////////////////////END OF DETECTION ROUTINE ////////////////////////////////////////////////////
                
                
                
                
                
                
                
                //??????? ENTER LOCK CLOSED ROUTINE ??????//
                
                
                
                
                //??????? ENTER LOCK CLOSED ROUTINE ??????//
                
                
                
                
            }
            else{
                LCDClearDisplay();
                LCDPrintString("HandShake Fail",1,0);
                
                __delay_ms(2000);
            }
            
            
        }
        else{
            LCDClearDisplay();
            LCDPrintString("Pass Check Fail",1,0);
            
            __delay_ms(2000);
        }
        
    }
}








bool Cancel_status(void){                              // Function for cacnelling current commmand
    
    if(Cancel_button_GetValue()){
        LCDClearDisplay();
        LCDPrintString("Action Cancel",1,0);
        
        return 1;
    }
    else return 0;
}
/**
 End of File
*/