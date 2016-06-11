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

uint8 i = 0; 
int8 result; 

CY_ISR(filterVDAC)
{
    result = ADC_DelSig_1_GetResult8();
	VDAC8_1_Data = (result + 128);
    Diode_1_Write(i); 
    i = ~i; 
}


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
   
    CyGlobalIntEnable;  /* Uncomment this line to enable global interrupts. */
    
    isr_StartEx(filterVDAC);
    for(;;)
    {
		/* Place your application code here. */
		
    }
}

