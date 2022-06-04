
#include <xc.h>
#include "SEN0188.h"

// each function is basically the same the required serial data is transmitted and appropriate return data is verified
// using the default mcc generated functions

bool Handshake(void){
    
    Rx_package_flush();
    
    for(int i=0; i<12; i++){ U1TXB = *(TxPack_GetEcho + i); }
    __delay_ms(1000);
    if(Rx_package[9] == 0x55){ return 1;}
    else return 0;
}


bool Verifypass(void){
    
    Rx_package_flush();
    Rx_package[9] = 1;
    for(int i=0; i<16; i++){ U1TXB = *(TxPack_VfyPwd + i); }
    __delay_ms(1000);
    if(Rx_package[9] == 0x00){ return 1;}
    else return 0;
}

uint8_t Getfinger(void){
    
    Rx_package_flush();
    Rx_package[9] = 1;
    for(int i=0; i<12; i++){ U1TXB = *(TxPack_GenImg + i); }
    __delay_ms(1000);
    return Rx_package[9];
}

bool Gen_char(void){
    
    Rx_package_flush();
    Rx_package[9] = 1;
    for(int i=0; i<13; i++){ U1TXB = *(TxPack_Img2Tz + i); }
    __delay_ms(1000);
    if(Rx_package[9] == 0){return 1;}
    else return 0;
    
}
bool Gen_Model(void){
    
    Rx_package_flush();
    for(int i=0; i<12; i++){ U1TXB = *(TxPack_RegModel + i); }
    __delay_ms(1000);
    if(Rx_package[9] == 0){return 1;}
    else return 0;
    
}


bool Store_char(uint8_t Id){
    
    Rx_package_flush();
    Rx_package[9] = 1;
    TxPack_Store[11] = Id;
    TxPack_Store[13] += Id;
    for(int i=0; i<14; i++){ U1TXB = *(TxPack_Store + i); }
    __delay_ms(1000);
    if(Rx_package[9] == 0){return 1;}
    else return 0;
    
}


uint8_t Search_Finger(void){
    
    Rx_package_flush();
    Rx_package[9] = 1;
    for(int i=0; i<17; i++){ U1TXB = *(TxPack_Search + i); }
    __delay_ms(1000);
    if(Rx_package[9]==0){ return Rx_package[11]; }
    else return 0;
}

bool Delete_Finger(uint8_t Id){
    
    Rx_package_flush();
    Rx_package[9] = 1;
    TxPack_DeletChar[11] = Id;
    TxPack_DeletChar[15] += Id;
    for(int i=0; i<16; i++){ U1TXB = *(TxPack_DeletChar + i); }
    __delay_ms(1000);
    if(Rx_package[9] == 0){return 1;}
    else return 0;
    
}



void Rx_package_custom(void){
    
    Rx_package[Rx_package_index++] = U1RXB;
    PIR3bits.U1RXIF = 0;
    
}

void Rx_package_flush(void){
    Rx_package_index = 0;
    for(int i=0; i<20; i++){Rx_package[i] = 0;}
}