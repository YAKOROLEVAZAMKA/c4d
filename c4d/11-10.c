#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a, r, value;

    srand((unsigned)time(NULL));
    for (a = 0; a < 5; a++)
    {
        r = rand();
        value = r % 100 + 1;
        printf ("%d\t", value);
    }
    return (0);
}