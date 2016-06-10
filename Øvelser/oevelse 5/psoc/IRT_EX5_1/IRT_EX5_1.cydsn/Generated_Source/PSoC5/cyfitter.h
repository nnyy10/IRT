#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* Vin */
#define Vin__0__MASK 0x02u
#define Vin__0__PC CYREG_PRT0_PC1
#define Vin__0__PORT 0u
#define Vin__0__SHIFT 1
#define Vin__AG CYREG_PRT0_AG
#define Vin__AMUX CYREG_PRT0_AMUX
#define Vin__BIE CYREG_PRT0_BIE
#define Vin__BIT_MASK CYREG_PRT0_BIT_MASK
#define Vin__BYP CYREG_PRT0_BYP
#define Vin__CTL CYREG_PRT0_CTL
#define Vin__DM0 CYREG_PRT0_DM0
#define Vin__DM1 CYREG_PRT0_DM1
#define Vin__DM2 CYREG_PRT0_DM2
#define Vin__DR CYREG_PRT0_DR
#define Vin__INP_DIS CYREG_PRT0_INP_DIS
#define Vin__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Vin__LCD_EN CYREG_PRT0_LCD_EN
#define Vin__MASK 0x02u
#define Vin__PORT 0u
#define Vin__PRT CYREG_PRT0_PRT
#define Vin__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Vin__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Vin__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Vin__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Vin__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Vin__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Vin__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Vin__PS CYREG_PRT0_PS
#define Vin__SHIFT 1
#define Vin__SLW CYREG_PRT0_SLW

/* isr */
#define isr__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr__INTC_MASK 0x01u
#define isr__INTC_NUMBER 0u
#define isr__INTC_PRIOR_NUM 7u
#define isr__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define isr__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Vout */
#define Vout__0__MASK 0x04u
#define Vout__0__PC CYREG_PRT1_PC2
#define Vout__0__PORT 1u
#define Vout__0__SHIFT 2
#define Vout__AG CYREG_PRT1_AG
#define Vout__AMUX CYREG_PRT1_AMUX
#define Vout__BIE CYREG_PRT1_BIE
#define Vout__BIT_MASK CYREG_PRT1_BIT_MASK
#define Vout__BYP CYREG_PRT1_BYP
#define Vout__CTL CYREG_PRT1_CTL
#define Vout__DM0 CYREG_PRT1_DM0
#define Vout__DM1 CYREG_PRT1_DM1
#define Vout__DM2 CYREG_PRT1_DM2
#define Vout__DR CYREG_PRT1_DR
#define Vout__INP_DIS CYREG_PRT1_INP_DIS
#define Vout__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Vout__LCD_EN CYREG_PRT1_LCD_EN
#define Vout__MASK 0x04u
#define Vout__PORT 1u
#define Vout__PRT CYREG_PRT1_PRT
#define Vout__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Vout__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Vout__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Vout__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Vout__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Vout__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Vout__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Vout__PS CYREG_PRT1_PS
#define Vout__SHIFT 2
#define Vout__SLW CYREG_PRT1_SLW

/* Vref */
#define Vref__0__MASK 0x01u
#define Vref__0__PC CYREG_PRT0_PC0
#define Vref__0__PORT 0u
#define Vref__0__SHIFT 0
#define Vref__AG CYREG_PRT0_AG
#define Vref__AMUX CYREG_PRT0_AMUX
#define Vref__BIE CYREG_PRT0_BIE
#define Vref__BIT_MASK CYREG_PRT0_BIT_MASK
#define Vref__BYP CYREG_PRT0_BYP
#define Vref__CTL CYREG_PRT0_CTL
#define Vref__DM0 CYREG_PRT0_DM0
#define Vref__DM1 CYREG_PRT0_DM1
#define Vref__DM2 CYREG_PRT0_DM2
#define Vref__DR CYREG_PRT0_DR
#define Vref__INP_DIS CYREG_PRT0_INP_DIS
#define Vref__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Vref__LCD_EN CYREG_PRT0_LCD_EN
#define Vref__MASK 0x01u
#define Vref__PORT 0u
#define Vref__PRT CYREG_PRT0_PRT
#define Vref__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Vref__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Vref__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Vref__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Vref__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Vref__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Vref__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Vref__PS CYREG_PRT0_PS
#define Vref__SHIFT 0
#define Vref__SLW CYREG_PRT0_SLW

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x01u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x02u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x02u

/* Diode_1 */
#define Diode_1__0__MASK 0x20u
#define Diode_1__0__PC CYREG_PRT3_PC5
#define Diode_1__0__PORT 3u
#define Diode_1__0__SHIFT 5
#define Diode_1__AG CYREG_PRT3_AG
#define Diode_1__AMUX CYREG_PRT3_AMUX
#define Diode_1__BIE CYREG_PRT3_BIE
#define Diode_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define Diode_1__BYP CYREG_PRT3_BYP
#define Diode_1__CTL CYREG_PRT3_CTL
#define Diode_1__DM0 CYREG_PRT3_DM0
#define Diode_1__DM1 CYREG_PRT3_DM1
#define Diode_1__DM2 CYREG_PRT3_DM2
#define Diode_1__DR CYREG_PRT3_DR
#define Diode_1__INP_DIS CYREG_PRT3_INP_DIS
#define Diode_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Diode_1__LCD_EN CYREG_PRT3_LCD_EN
#define Diode_1__MASK 0x20u
#define Diode_1__PORT 3u
#define Diode_1__PRT CYREG_PRT3_PRT
#define Diode_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Diode_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Diode_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Diode_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Diode_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Diode_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Diode_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Diode_1__PS CYREG_PRT3_PS
#define Diode_1__SHIFT 5
#define Diode_1__SLW CYREG_PRT3_SLW

/* Opamp_1_ABuf */
#define Opamp_1_ABuf__CR CYREG_OPAMP2_CR
#define Opamp_1_ABuf__MX CYREG_OPAMP2_MX
#define Opamp_1_ABuf__NPUMP_OPAMP_TR0 CYREG_NPUMP_OPAMP_TR0
#define Opamp_1_ABuf__PM_ACT_CFG CYREG_PM_ACT_CFG4
#define Opamp_1_ABuf__PM_ACT_MSK 0x04u
#define Opamp_1_ABuf__PM_STBY_CFG CYREG_PM_STBY_CFG4
#define Opamp_1_ABuf__PM_STBY_MSK 0x04u
#define Opamp_1_ABuf__RSVD CYREG_OPAMP2_RSVD
#define Opamp_1_ABuf__SW CYREG_OPAMP2_SW
#define Opamp_1_ABuf__TR0 CYREG_OPAMP2_TR0
#define Opamp_1_ABuf__TR1 CYREG_OPAMP2_TR1

/* Opamp_3_ABuf */
#define Opamp_3_ABuf__CR CYREG_OPAMP1_CR
#define Opamp_3_ABuf__MX CYREG_OPAMP1_MX
#define Opamp_3_ABuf__NPUMP_OPAMP_TR0 CYREG_NPUMP_OPAMP_TR0
#define Opamp_3_ABuf__PM_ACT_CFG CYREG_PM_ACT_CFG4
#define Opamp_3_ABuf__PM_ACT_MSK 0x02u
#define Opamp_3_ABuf__PM_STBY_CFG CYREG_PM_STBY_CFG4
#define Opamp_3_ABuf__PM_STBY_MSK 0x02u
#define Opamp_3_ABuf__RSVD CYREG_OPAMP1_RSVD
#define Opamp_3_ABuf__SW CYREG_OPAMP1_SW
#define Opamp_3_ABuf__TR0 CYREG_OPAMP1_TR0
#define Opamp_3_ABuf__TR1 CYREG_OPAMP1_TR1

/* VDAC8_1_viDAC8 */
#define VDAC8_1_viDAC8__CR0 CYREG_DAC3_CR0
#define VDAC8_1_viDAC8__CR1 CYREG_DAC3_CR1
#define VDAC8_1_viDAC8__D CYREG_DAC3_D
#define VDAC8_1_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define VDAC8_1_viDAC8__PM_ACT_MSK 0x08u
#define VDAC8_1_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define VDAC8_1_viDAC8__PM_STBY_MSK 0x08u
#define VDAC8_1_viDAC8__STROBE CYREG_DAC3_STROBE
#define VDAC8_1_viDAC8__SW0 CYREG_DAC3_SW0
#define VDAC8_1_viDAC8__SW2 CYREG_DAC3_SW2
#define VDAC8_1_viDAC8__SW3 CYREG_DAC3_SW3
#define VDAC8_1_viDAC8__SW4 CYREG_DAC3_SW4
#define VDAC8_1_viDAC8__TR CYREG_DAC3_TR
#define VDAC8_1_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC3_M1
#define VDAC8_1_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC3_M2
#define VDAC8_1_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC3_M3
#define VDAC8_1_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC3_M4
#define VDAC8_1_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC3_M5
#define VDAC8_1_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC3_M6
#define VDAC8_1_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC3_M7
#define VDAC8_1_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC3_M8
#define VDAC8_1_viDAC8__TST CYREG_DAC3_TST

/* VDAC8_2_viDAC8 */
#define VDAC8_2_viDAC8__CR0 CYREG_DAC0_CR0
#define VDAC8_2_viDAC8__CR1 CYREG_DAC0_CR1
#define VDAC8_2_viDAC8__D CYREG_DAC0_D
#define VDAC8_2_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define VDAC8_2_viDAC8__PM_ACT_MSK 0x01u
#define VDAC8_2_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define VDAC8_2_viDAC8__PM_STBY_MSK 0x01u
#define VDAC8_2_viDAC8__STROBE CYREG_DAC0_STROBE
#define VDAC8_2_viDAC8__SW0 CYREG_DAC0_SW0
#define VDAC8_2_viDAC8__SW2 CYREG_DAC0_SW2
#define VDAC8_2_viDAC8__SW3 CYREG_DAC0_SW3
#define VDAC8_2_viDAC8__SW4 CYREG_DAC0_SW4
#define VDAC8_2_viDAC8__TR CYREG_DAC0_TR
#define VDAC8_2_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC0_M1
#define VDAC8_2_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC0_M2
#define VDAC8_2_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC0_M3
#define VDAC8_2_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC0_M4
#define VDAC8_2_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC0_M5
#define VDAC8_2_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC0_M6
#define VDAC8_2_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC0_M7
#define VDAC8_2_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC0_M8
#define VDAC8_2_viDAC8__TST CYREG_DAC0_TST

/* ADC_DelSig_1_DEC */
#define ADC_DelSig_1_DEC__COHER CYREG_DEC_COHER
#define ADC_DelSig_1_DEC__CR CYREG_DEC_CR
#define ADC_DelSig_1_DEC__DR1 CYREG_DEC_DR1
#define ADC_DelSig_1_DEC__DR2 CYREG_DEC_DR2
#define ADC_DelSig_1_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DelSig_1_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DelSig_1_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DelSig_1_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DelSig_1_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DelSig_1_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DelSig_1_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DelSig_1_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DelSig_1_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DelSig_1_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DelSig_1_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DelSig_1_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DelSig_1_DEC__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DelSig_1_DEC__PM_STBY_MSK 0x01u
#define ADC_DelSig_1_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DelSig_1_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DelSig_1_DEC__SR CYREG_DEC_SR
#define ADC_DelSig_1_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DelSig_1_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DelSig_1_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DelSig_1_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DelSig_1_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DelSig_1_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DelSig_1_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DelSig_1_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_DelSig_1_DSM */
#define ADC_DelSig_1_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DelSig_1_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DelSig_1_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DelSig_1_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DelSig_1_DSM__CLK CYREG_DSM0_CLK
#define ADC_DelSig_1_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DelSig_1_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DelSig_1_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DelSig_1_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DelSig_1_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DelSig_1_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DelSig_1_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DelSig_1_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DelSig_1_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DelSig_1_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DelSig_1_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DelSig_1_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DelSig_1_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DelSig_1_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DelSig_1_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DelSig_1_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DelSig_1_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DelSig_1_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DelSig_1_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DelSig_1_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DelSig_1_DSM__MISC CYREG_DSM0_MISC
#define ADC_DelSig_1_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DelSig_1_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DelSig_1_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DelSig_1_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DelSig_1_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DelSig_1_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DelSig_1_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DelSig_1_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DelSig_1_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DelSig_1_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DelSig_1_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DelSig_1_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DelSig_1_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DelSig_1_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DelSig_1_DSM__TST1 CYREG_DSM0_TST1

/* ADC_DelSig_1_Ext_CP_Clk */
#define ADC_DelSig_1_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_DelSig_1_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_DelSig_1_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_1_Ext_CP_Clk__INDEX 0x00u
#define ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK 0x01u

/* ADC_DelSig_1_IRQ */
#define ADC_DelSig_1_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_DelSig_1_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_DelSig_1_IRQ__INTC_MASK 0x20000000u
#define ADC_DelSig_1_IRQ__INTC_NUMBER 29u
#define ADC_DelSig_1_IRQ__INTC_PRIOR_NUM 7u
#define ADC_DelSig_1_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_DelSig_1_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_DelSig_1_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_DelSig_1_theACLK */
#define ADC_DelSig_1_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_DelSig_1_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_DelSig_1_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_1_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_DelSig_1_theACLK__INDEX 0x00u
#define ADC_DelSig_1_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_DelSig_1_theACLK__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_DelSig_1_theACLK__PM_STBY_MSK 0x01u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 4u
#define CYDEV_CHIP_DIE_PSOC4A 2u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E127069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 2u
#define CYDEV_CHIP_MEMBER_4D 3u
#define CYDEV_CHIP_MEMBER_5A 4u
#define CYDEV_CHIP_MEMBER_5B 5u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_ES0 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_Disable
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000001u
#define CYDEV_PROJ_TYPE 2
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
#define CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP 
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define Dedicated_Output__MASK 0x40u
#define Dedicated_Output__PC CYREG_PRT3_PC6
#define Dedicated_Output__PORT 3u
#define Dedicated_Output__SHIFT 6
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
