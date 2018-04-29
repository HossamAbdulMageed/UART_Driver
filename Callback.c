#include "UART.h"
#include "Callback.h"


void TxDone_Func (void)
{
  Y1++;
  UART_Rx_Init(UART_Rx_IntBuff,2,2);
}

void RxDone_Func (void)
{
  Y2++;
  UART_Tx_Init(UART_Tx_IntBuff,4,1);
}
