#include <stdio.h>

void ft_print(int array[])
{
    int i = 0;

    while (array[i])
    {
        printf("[%d] - %d\n", i, array[i]);
        i++;
    }
}

void ft_swap(int array[], int i, int j)
{
    int temp;

    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void bubble(int array[])
{
    int i = 0;
    int k = 1;
    int p;

    for(p = 0; array[p]; p++)
        ;
    printf("\n");
    while (k < p)
    {
        if(array[i] < array[k])
        {
           ft_swap(array, i, k);
           i = 0;
           k = 1;
        }
        else
        {
            i++;
            k++;
        }
    }

}

/*int main(void)
{
    int array[] = {5, 11, 3, 456, 123, 4534, 223, 2, 345};

    ft_print(array);
    bubble(array);
    ft_print(array);
    return (0);
}*/