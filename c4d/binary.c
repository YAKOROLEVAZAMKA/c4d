#include <stdio.h>

char *binbin(int n)
{
    static char bin[17];
    int x;

    for (x = 0; x < 16; x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return (bin);
}

int main(void)
{
    int input;

    printf("0-65\'535: ");
    scanf("%d", &input);
    printf("%d = %s\n", input, binbin(input));
    return (0);
}