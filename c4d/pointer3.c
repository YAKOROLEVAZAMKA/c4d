#include <stdio.h>

int main(void)
{
    char a, b, c;
    char *p;

    int x, y;
    int *z;

    x = 2;
    z = &x;

    printf("%d - %p\n", *z, z);

    p = &a;
    *p = 'A';
    p = &b;
    *p = 'B';
    p = &c;
    *p = 'X';

    printf("%c%c%c", a, b, c);

    return (0);
}