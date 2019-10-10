#include <stdio.h>
#define SET 32
#include "binbin.c"

char *binbin(int n);

int main(void)
{
    int bor, result;

    printf("0-255: ");
    scanf("%d", &bor);
    result = bor | SET;

    printf("\t%s\t%d\n", binbin(bor), bor);
    printf("|\t%s\t%d\n", binbin(SET), SET);
    printf("=\t%s\t%d\n", binbin(result), result);
    return (0);
}