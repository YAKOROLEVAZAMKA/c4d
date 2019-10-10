#include <stdio.h>
#include "binbin.c"

char *binbin(int n);

int main(int argc, char **argv)
{
    int a, x, r;

    a = 73;
    x = 170;

    printf("  %s %3d\n", binbin(a), a);
    printf("^ %s %3d\n", binbin(x), x);
    r = a ^ x;
    printf("= %s %3d\n", binbin(r), r);
    printf("^ %s %3d\n", binbin(x), x);
    a = r ^ x;
    printf("  %s %3d\n", binbin(a), a);
    return (0);
}