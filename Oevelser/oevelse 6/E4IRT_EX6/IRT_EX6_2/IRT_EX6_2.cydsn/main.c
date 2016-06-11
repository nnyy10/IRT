/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

#define DMA_1_BYTES_PER_BURST 1
#define DMA_1_REQUEST_PER_BURST 1
#define DMA_1_SRC_BASE (CYDEV_PERIPH_BASE)
#define DMA_1_DST_BASE (CYDEV_PERIPH_BASE)

uint8 i = 0; 

CY_ISR(filterVDAC)
{
	VDAC8_1_Data = (Filter_HOLDAH_REG + 128);
    Diode_1_Write(i); 
    i = ~i; 
}
void setupDMA();

void main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
	Opamp_1_Start();
	Opamp_3_Start();
    Clock_1_Start(); 
	ADC_DelSig_1_Start();
	ADC_DelSig_1_StartConvert();
	VDAC8_1_Start();
	VDAC8_2_Start();
	Filter_Start();
    
    setupDMA();
    
    CyGlobalIntEnable;  /* Uncomment this line to enable global interrupts. */
    
    isr_StartEx(filterVDAC);
    for(;;)
    {
		/* Place your application code here. */
		
    }
}


void setupDMA(){
uint8 DMA_1_Chan;
uint8 DMA_1_TD[1];

DMA_1_Chan = DMA_1_DmaInitialize(DMA_1_BYTES_PER_BURST, DMA_1_REQUEST_PER_BURST, 
    HI16(DMA_1_SRC_BASE), HI16(DMA_1_DST_BASE));

DMA_1_TD[0] = CyDmaTdAllocate();

CyDmaTdSetConfiguration(DMA_1_TD[0], 1, DMA_INVALID_TD, 0);

CyDmaTdSetAddress(DMA_1_TD[0], LO16((uint32)ADC_DelSig_1_DEC_SAMP_PTR), LO16((uint32)Filter_STAGEAH_PTR));

CyDmaChSetInitialTd(DMA_1_Chan, DMA_1_TD[0]);

CyDmaChEnable(DMA_1_Chan, 1);

}
/* [] END OF FILE */
