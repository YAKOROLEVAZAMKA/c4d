#include <unistd.h>

char ft_putchar(char c)
{
    write (1, &c, 1);
}

char ft_putstr(char str[])
{
    int i;

    i = 0;

    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    ft_putstr(argv[1]);
    return (0);
}