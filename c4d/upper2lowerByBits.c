#include <stdio.h>

int main(void)
{
    char input[64];
    int ch;
    int x = 0;

    printf("Input text: ");
    fgets(input, 63, stdin);

    while(input[x] != '\n')
    {
        if (input[x] >= 'A' && input[x] <= 'Z')
        {
            ch = input[x] | 32;
            putchar(ch);
            x++;
        }
        else
        {
            ch = input[x];
            putchar(ch);
            x++;
        }
        if (input[x] >= 'a' && input[x] <= 'z')
        {
            ch = input[x] & 223;
            putchar(ch);
            x++;
        }
        else
        {
            ch = input[x];
            putchar(ch);
            x++;
        }
        
    }
    putchar('\n');

    return (0);
}