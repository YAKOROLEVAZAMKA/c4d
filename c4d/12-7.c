#include <stdio.h>
#include <math.h>

int main(void)
{
    int array1[] = {110, 12, 14, 15, 16, 18, 120};
    int array2[8];

    int i = 0;

    while (i < 7)
    {
        array2[i] = sqrt(array1[i]);
        i++;
    }
    
    i = 0;

    while (array2[i])
    {
        printf("array1 [%d] - %d\n", i, array1[i]);
        printf("array2 [%d] - %d\n", i, array2[i]);
        i++;
    }
    return (0);
}