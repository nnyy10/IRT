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
 0x00u, 0x00u, 0x40u, 0x00u, /* Section(0)_A0, 1 */

 0x00u, 0x00u, 0x00u, 0x00u, /* Section(0)_A1, 0 */

 0x00u, 0x00u, 0x00u, 0x00u, /* Section(0)_A2, 0 */

 0x00u, 0x00u, 0x00u, 0x00u, /* Section(0)_B1, 0 */

 0x00u, 0x00u, 0x00u, 0x00u, /* Section(0)_B2, 0 */
};

