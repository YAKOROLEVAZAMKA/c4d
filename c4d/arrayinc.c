#include <stdio.h>

void show_array(int array[])
{
    int i = 0;

    while (array[i])
    {
        printf("%d\t", array[i]);
        i++;
    }
}

void array_inc(int array[])
{
    int i = 0;

    while (array[i])
    {
        array[i] += 5;
        i++;
    }
}

int main(void)
{
    int array[6] = {1, 3, 6, 5, 2};
    show_array(array);
    array_inc(array);
    puts("\n");
    show_array(array);
    return (0);
}