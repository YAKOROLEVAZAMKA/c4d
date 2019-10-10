#include <stdio.h>

int main(void)
{
    int arr[] = {1, 4, 5, 7, 9};

    int *ptr;

    ptr = arr;

    printf("%d\n", *(ptr + 4));
    printf("%d\n", arr[4]);
    return (0);
}