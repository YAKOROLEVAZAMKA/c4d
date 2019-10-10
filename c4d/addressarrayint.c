#include <stdio.h>

int main(void)
{
    int arr[] = {1, 33, 64, 74, 2};

    int i;
    for (i = 0; arr[i]; i++)
    {
        printf("%d - %p\n", arr[i], &arr[i]);
    }
    return 0;
}