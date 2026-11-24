#include <reg52.h>

sbit bz = P3^5;

bit on_flag = 0;
bit off_flag = 1;

unsigned int reload_val = 0;

void setMelody(unsigned int val)
{
    if (val == 0)
    {
        TR0 = 0;
        bz = 1;
    }
    else
    {
        reload_val = val;
        TH0 = reload_val / 256;
        TL0 = reload_val % 256;
        TR0 = 1;
    }
}
