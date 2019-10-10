#include <stdio.h>

int main(void)
{
    int year;

    printf("Write year: \n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0)
    {
        printf("%d visokosny\n", year);
    }
    else
    {
        printf("%d non-visokosny\n", year);
    }
    return (0);
}