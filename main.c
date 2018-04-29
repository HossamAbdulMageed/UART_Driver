#include <stdint.h>
#include "M4MemMap.h"
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "UART.h"
#include "UART_Cfg.h"


uint8_t UART_Rx_IntBuff[2]={0};
uint8_t UART_Tx_IntBuff[4]="Hey!";

uint8_t XXX,Y1,Y2 = 0;


int main(void)
{

    GPIO_Init();
    UART_Init();
    //EN_INT(5);  //UART0
    EN_INT(6);  //UART1
    EN_INT(33); //UART2
    //EN_INT(59); //UART3
    //EN_INT(60); //UART4
    //EN_INT(61); //UART5
    //EN_INT(63); //UART7





/*
    uint32_t k=0;
    UART_Tx_Init(UART_Tx_IntBuff,5,0);
    for(k=0;k<20000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
*/

    UART_Tx_Init(UART_Tx_IntBuff,4,1);
    //UART_Rx_Init(UART_Rx_IntBuff,2,2);


    while(1)
    {

    }


    return 0;

    }

