/*******************************************************************************
* File Name: Vout.h  
* Version 2.5
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Vout_H) /* Pins Vout_H */
#define CY_PINS_Vout_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vout_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_5 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vout__PORT == 15 && ((Vout__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Vout_Write(uint8 value) ;
void    Vout_SetDriveMode(uint8 mode) ;
uint8   Vout_ReadDataReg(void) ;
uint8   Vout_Read(void) ;
uint8   Vout_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vout_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vout_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vout_DM_RES_UP          PIN_DM_RES_UP
#define Vout_DM_RES_DWN         PIN_DM_RES_DWN
#define Vout_DM_OD_LO           PIN_DM_OD_LO
#define Vout_DM_OD_HI           PIN_DM_OD_HI
#define Vout_DM_STRONG          PIN_DM_STRONG
#define Vout_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vout_MASK               Vout__MASK
#define Vout_SHIFT              Vout__SHIFT
#define Vout_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vout_PS                     (* (reg8 *) Vout__PS)
/* Data Register */
#define Vout_DR                     (* (reg8 *) Vout__DR)
/* Port Number */
#define Vout_PRT_NUM                (* (reg8 *) Vout__PRT) 
/* Connect to Analog Globals */                                                  
#define Vout_AG                     (* (reg8 *) Vout__AG)                       
/* Analog MUX bux enable */
#define Vout_AMUX                   (* (reg8 *) Vout__AMUX) 
/* Bidirectional Enable */                                                        
#define Vout_BIE                    (* (reg8 *) Vout__BIE)
/* Bit-mask for Aliased Register Access */
#define Vout_BIT_MASK               (* (reg8 *) Vout__BIT_MASK)
/* Bypass Enable */
#define Vout_BYP                    (* (reg8 *) Vout__BYP)
/* Port wide control signals */                                                   
#define Vout_CTL                    (* (reg8 *) Vout__CTL)
/* Drive Modes */
#define Vout_DM0                    (* (reg8 *) Vout__DM0) 
#define Vout_DM1                    (* (reg8 *) Vout__DM1)
#define Vout_DM2                    (* (reg8 *) Vout__DM2) 
/* Input Buffer Disable Override */
#define Vout_INP_DIS                (* (reg8 *) Vout__INP_DIS)
/* LCD Common or Segment Drive */
#define Vout_LCD_COM_SEG            (* (reg8 *) Vout__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vout_LCD_EN                 (* (reg8 *) Vout__LCD_EN)
/* Slew Rate Control */
#define Vout_SLW                    (* (reg8 *) Vout__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vout_PRTDSI__CAPS_SEL       (* (reg8 *) Vout__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vout_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vout__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vout_PRTDSI__OE_SEL0        (* (reg8 *) Vout__PRTDSI__OE_SEL0) 
#define Vout_PRTDSI__OE_SEL1        (* (reg8 *) Vout__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vout_PRTDSI__OUT_SEL0       (* (reg8 *) Vout__PRTDSI__OUT_SEL0) 
#define Vout_PRTDSI__OUT_SEL1       (* (reg8 *) Vout__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vout_PRTDSI__SYNC_OUT       (* (reg8 *) Vout__PRTDSI__SYNC_OUT) 


#if defined(Vout__INTSTAT)  /* Interrupt Registers */

    #define Vout_INTSTAT                (* (reg8 *) Vout__INTSTAT)
    #define Vout_SNAP                   (* (reg8 *) Vout__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vout_H */


/* [] END OF FILE */
