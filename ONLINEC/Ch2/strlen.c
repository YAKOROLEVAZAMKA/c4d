#include <unistd.h>
#include <stdio.h>

int ft_strlen(char s[]);

int ft_strlen(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("arguments = %d", argc);
    }
    else
    {
        printf("strlen = %d", ft_strlen(argv[1]));
    }
    return (0);
}