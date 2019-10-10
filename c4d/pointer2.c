#include <stdio.h>

int main(void)
{
    char a, b, c;
    char *p;

    a = 'A';
    b = 'B';
    c = 'C';

    printf("Out: ");
    p = &a;
    putchar(*p);
    p = &b;
    putchar(*p);
    p = &c;
    putchar(*p);
    putchar('\n');

    return (0);
}