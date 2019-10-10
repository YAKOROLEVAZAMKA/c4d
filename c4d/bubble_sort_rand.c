#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble.c"

void ft_print(int array[]);
void ft_swap(int array[], int i, int j);
void bubble(int array[]);
void bubble_rev(int array[]);

int main()
{
    int a, i, r;
    int array[41];
    i = 0;

    srand((unsigned)time(NULL));
    for (a = 0; a <= 39; a++, i++)
    {
        r = rand();
        array[i] = r % 100 + 1;
        printf ("%d\t", array[i]);
        //i++;
    }
    array[i] = '\0';
    puts("\n");
    ft_print(array);
    bubble_rev(array);
    ft_print(array);
    return (0);
}