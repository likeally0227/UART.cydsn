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
#include "project.h"

int main(void)
{
    __enable_irq(); 
    Cy_SysEnableCM4(CY_CORTEX_M4_APPL_ADDR); 
    mUART_Start();
    for(;;)
    {
        static float angle = 0;
        angle+=1;
        if(angle >= 360) angle -= 360;
        float value = sin(angle * 3.14 /180) * 100;
        printf("%f\n\r", value);
    }
    
}

/* [] END OF FILE */
