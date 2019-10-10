#include <stdio.h>

int main(void)
{
    int numbers[10];
    int x;
    int *pn;

    pn = numbers;

    for (x = 0; x < 10; x++)
    {
        *pn = x + 1;
        printf("%d\t%d\n", *pn, numbers[x]);
        pn++;
    }
    //printf("%d\t%d\n", *pn, numbers[x]);
    /*for (x = 0; x < 10; x++)
    {
        pn--;
        //printf("%d\n", *pn);
    }*/

    pn = numbers;
   

    for (x = 0; x < 10; x++)
    {
        //printf("numbers[%d] = %d\t address - %p\n", x+1, numbers[x], &numbers[x]);
        printf("numbers[%d] = %d\n", x+1, *pn);
        pn++;
    }
    return (0);
}