#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        puts("\n");
        return (0);
    }
    else
    {
        char t;
        int i;
        i = 0;

        while (argv[1][i] != '\0')
        {
            t = argv[1][i];
            if ((t >= 65 && t < 90) || (t >= 97 && t < 122))
            {
                putchar(t+1);
                i++;
            }
            else if (t == 90 || t == 122)
            {
                putchar(t-25);
                i++;
            }
            else
            {
                putchar(t);
                i++;
            }
            
        }
    }
    puts ("\n");
    return (0);
}