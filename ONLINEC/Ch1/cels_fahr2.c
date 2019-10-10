#include <stdio.h>

int convert(int m);

int convert(int fahr)
{
    int i = 0;

    i = 5 * (fahr - 32) / 9;
    return i;
}

int main(void)
{
    int fahr = 0;
    printf("Write fahr\n");
    scanf("%d", &fahr);
    printf("Cels = %d", convert(fahr));
    return (0);
}