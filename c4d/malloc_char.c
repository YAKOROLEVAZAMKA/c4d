#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int count(char s[])
{
    int i;

    for(i = 0; s[i] != '\0'; i++)
        ;
    return (i);
}

void copy(char *s, char *c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        c[i] = s[i];
        i++;
    }
}

void kille(char *c)
{
    int i;

    for (i = 0; c[i] != '\n'; i++)
        ;
    c[i] = '\0';
}

int check(char c)
{
    int i = 0;

    char array[] = "qeyuioaQEYUIOA";

    while (array[i] != '\0')
    {
        if (array[i] == c)
            return (1);
        else 
            i++;
    }
    return (0);
}
void rep(char *c)
{
    int i = 0;

    while (c[i] != '\0')
    {
        if (check(c[i]) == 1)
            c[i] = '@';
        i++;
    }
}

int main(void)
{
    char *input;
    char *in;

    input = (char *)malloc(sizeof(char)*1024);

    if (input == NULL)
        exit (1);
     
    puts("Write smth");
    fgets(input, 1023, stdin);
    puts("Entered: ");
    printf("\"%s\"\n", input);
    write(1, "\n", 1);

    in = (char *)malloc(sizeof(char)*count(input));
    copy(input, in);
    kille(in);
    printf("Copied:\n\"%s\"", in);

    rep(in);
    write(1, "\n", 1);
    printf("Replaced:\n\"%s\"", in);


    return (0);
}