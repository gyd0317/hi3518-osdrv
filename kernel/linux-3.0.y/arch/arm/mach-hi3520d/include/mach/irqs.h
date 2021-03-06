#ifndef __HI_IRQS_H__
#define __HI_IRQS_H__

#define HI3520D_IRQ_START	(32)
#define COMMTX_IRQ		(HI3520D_IRQ_START + 0)
#define TIMER01_IRQ		(HI3520D_IRQ_START + 3)
#define TIMER23_IRQ		(HI3520D_IRQ_START + 4)

#define UART0_IRQ		(HI3520D_IRQ_START + 8)
#define UART1_IRQ		(HI3520D_IRQ_START + 9)

#define INTNR_L2CACHE_CHK0_INT	(HI3520D_IRQ_START + 29)
#define INTNR_L2CACHE_CHK1_INT	(HI3520D_IRQ_START + 30)
#define INTNR_L2CACHE_INT_COMB	(HI3520D_IRQ_START + 31)
#define MAX_GIC_NR		1

#define NR_IRQS			(HI3520D_IRQ_START + 96)
#endif
