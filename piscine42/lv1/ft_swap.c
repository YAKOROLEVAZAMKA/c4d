#include <stdio.h>
#include <stdlib.h>

void ft_swap (int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int *a;
    int *b;

    a = (int*)malloc(sizeof(int)*1);
    b = (int*)malloc(sizeof(int)*1);

    int c = 15;
    int d = 20;

    a = &c;
    b = &d;

    printf("a = %d, b = %d\n", *a, *b);
    puts("after swap");
    ft_swap(a, b);
    printf("a = %d, b = %d\n", *a, *b);
    puts("\n");
    printf("c = %d, d = %d\n", c, d);
    puts("after swap");
    ft_swap(&c, &d);
    printf("c = %d, d = %d\n", c, d);

    return (0);
}