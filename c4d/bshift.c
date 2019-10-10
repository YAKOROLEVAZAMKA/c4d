#include <stdio.h>
#include "binbin16.c"

int bombom(char c[]);

int stepen(int n);

char *binbin(int n);

int main (void)
{
    int bshift, x;

    printf("0-255: ");
    scanf("%d", &bshift);

    for (x = 0; x < 8; x++)
    {
        printf("%s\t%d\n", binbin(bshift), bombom(binbin(bshift)));
        bshift = bshift << 1;
    }
    return (0);
}

int bombom(char c[])
{
    int i, x, y, p;
    i = 0;
    y = 0;
    
    while (c[i])
    {
        p++;
        i++;
    }
    
    i = 0;
 
    while (c[i] != '\0')
    {
        x = c[i] - '0';
        if (x == 1)
            y = y + stepen(p);
        //printf("  %d  ", x);
        //if (c[i+1] != '\0')
        //{
        //    y = y * 10 + x;
        //}
        i++;
        p--;
    }
    return (y);
}

int stepen(int n)
{
    int a, b, i;
    a = 2;
    b = 1;
    i = 1;

    while (i < n)
    {
        b = b * a;
        i++;
    }
    return (b);
}