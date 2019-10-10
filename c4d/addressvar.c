#include <stdio.h>

int main(void)
{
    char c = 'a';
    int i = 123;
    float f = 2.22;
    double d = 6.22E23;

    printf("Address ov char = %p\n", &c);
    printf("Address ov int = %p\n", &i);
    printf("Address ov float = %p\n", &f);
    printf("Address ov double = %p\n", &d);
    return (0);
}