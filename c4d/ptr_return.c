#include <stdio.h>

char *strrev(char *input)
{
    static char output[64];
    char *i, *o;

    i = input; o = output;

    while (*i++ != '\n')
        ;
    i-=2;

    while (i >= input)
        *o++ = *i--;
    *o = '\0';

    return (output);
}

int main(void)
{
    char string[64];

    printf("Enter some kind ov text\n");
    fgets(string, 62, stdin);
    puts(strrev(string));

    return (0);
}