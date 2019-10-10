#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int seed;
    int r, a , b;

    scanf("%u", &seed);
    srand(seed);
    for (a = 0; a < 20; a++)
    {
        for (b = 0; b < 5; b++)
        {
            r = rand();
            printf("%d\t", r);
        }
        putchar ('\n');
    }
    return (0);
}