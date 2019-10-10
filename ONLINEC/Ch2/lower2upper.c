#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_lower(int c);
char ft_putchar(char c);

char ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 'a' - 'A');
    else
    {    
        if (c >= 'a' && c <= 'z')
            return (c + 'A' - 'a');
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("%s", argv[0]);
    }
    else
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if (isdigit(argv[1][i]))
            {
                printf("DIGIT");
                i++;
            }
            else
            {
                ft_putchar(ft_lower(argv[1][i]));
                i++;
            }
        }
    }
    return (0);
}