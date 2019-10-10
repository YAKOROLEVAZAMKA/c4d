#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        putchar('\n');
        return (0);
    }
    else
    {
        ft_putstr(argv[1]);
    }

    return (0);
}