#include <xc.h>

extern unsigned char ch;
    
void interrupt isr(void)
{
    if (RCIF == 1)
    {
        if (OERR == 1)
            OERR = 0;
        
        ch = RCREG;
        
        RCIF = 0;
    }
}
