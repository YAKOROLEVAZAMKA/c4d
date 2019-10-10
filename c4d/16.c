#include <stdio.h>
#include "binbin.c"

char *binbin(int n);

int main(void)
{
    int b, x;
    b = 0x11;

    for (x = 0; x < 8; x++)
    {
        printf("%s 0x%04X %4d\n", binbin(b), b, b);
        b <<= 1;
    }
    return (0);
}