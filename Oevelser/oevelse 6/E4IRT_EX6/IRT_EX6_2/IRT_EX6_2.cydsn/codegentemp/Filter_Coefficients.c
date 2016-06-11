#include "Filter.h"
#include "Filter_PVT.h"


/*******************************************************************************
* ChannelA filter coefficients.
* Filter Type is: Biquad
*******************************************************************************/

/* Renamed array for backward compatibility.
*  Should not be used in new designs.
*/
#define ChannelABiquadCoefficients Filter_ChannelABiquadCoefficients

/* Number of Biquad sections are: 1 */

const uint8 CYCODE Filter_ChannelABiquadCoefficients[Filter_BIQUAD_A_SIZE] = 
{
 /* Coefficients of Section 0 */
 0xF8u, 0xCBu, 0x48u, 0x00u, /* Section(0)_A0, 1.13744926452637 */

 0x34u, 0x54u, 0xB9u, 0x00u, /* Section(0)_A1, -1.10423564910889 */

 0x00u, 0x00u, 0x00u, 0x00u, /* Section(0)_A2, 0 */

 0x56u, 0x9Fu, 0x3Fu, 0x00u, /* Section(0)_B1, -0.994100093841553 */

 0x00u, 0x00u, 0x00u, 0x00u, /* Section(0)_B2, 0 */
};

