#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*void ft_putchar(char c)
{
    write (1, &c, 1);
}*/

int main(int argc, char **argv)
{
    int i;
    i = 0;

    if (argc != 2)
    {
        putchar('\n');
        return (0);
    }
    else
    {
        //while ((argv[1][i] < 65) || (argv[1][i] > 90 && argv[1][i] < 97) || (argv[1][i] > 122))
        while (argv[1][i] < 33 || argv[1][i] > 126)
        {
            i++;
        }
        
        //while ((argv[1][i] >= 65 && argv[1][i] <= 90) || (argv[1][i] >= 97 && argv[1][i] <= 122))
        while (argv[1][i] >= 33 && argv[1][i] <= 126)
        {
            putchar(argv[1][i]);
            i++;
        }
    }

    putchar('\n');
    return (0);
}