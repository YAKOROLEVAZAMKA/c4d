#include <stdio.h>

int main(void)
{
    int i = 12345;

    printf("%-10d\n", i);
    printf("%-9d\n", i);
    printf("%-14d\n", i);
    printf("%-7d\n", i);
    return (0);
}