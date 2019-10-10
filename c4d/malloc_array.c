#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *array;
    int i = 0;
    int x = 100;

    array = (int *)malloc(sizeof(int)*3);
    if (array == NULL)
        exit (1);

    while (i < 3)
    {
        array[i] = x;
        x = x + 100;
        i++;
    }

    i = 0;

    while (array[i] != '\0')
    {
        printf("%d - array[%d]\n", array[i], i);
        i++;
    }

    return (0);
}