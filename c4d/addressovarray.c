#include <stdio.h>

int main(void)
{
    int array[] = {2, 4, 6, 7, 8};

    printf("Array - %p\n", &array);
    printf("Array - %p\n", array);
    return (0);
}