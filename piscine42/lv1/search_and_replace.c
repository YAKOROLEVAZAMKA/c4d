#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;

    if (argc != 4)
    {
        puts("\n");
        return (0);
    }
    else
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == argv[2][0])
            {    
                putchar(argv[3][0]);
            }
            else
            {
                putchar(argv[1][i]);
            }
            i++;
        }

    }
    puts("\n");
    return (0);
}