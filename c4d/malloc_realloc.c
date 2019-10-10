#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *input;
    int len;

    input = (char *)malloc(sizeof(char)*1024);
    if (input == NULL)
        exit (1);
    
    puts("Enter smthn:");
    fgets(input, 1023, stdin);
    len = strlen(input);

    if ((input = realloc(input, sizeof(char)*(len+1))) == NULL)
        exit (1);

    puts("Memory relocated!");
    puts ("You entered:");
    printf("\"%s\"\n", input);


    return (0);
}