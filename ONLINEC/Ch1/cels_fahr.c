#include <stdio.h>

int main(void)
{
    int fahr, cels;
    int low, up, step;

    low = 0;
    up = 300;
    step = 20;

    fahr = low;
    while (fahr <= up)
    {
        cels = 5 * (fahr-32) / 9;
        printf("%3d - F\t%10d - C\n", fahr, cels);
        fahr = fahr + step;
    }
    return (0);
}