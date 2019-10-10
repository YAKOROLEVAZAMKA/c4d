#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, a , b, value;

    for (a = 0; a < 20; a++)
    {
        for (b = 0; b < 5; b++)
        {
            r = rand();
            value = (r % 20) + 1;
            printf("%d\t", value);
        }
        putchar ('\n');
    }
    return (0);
}