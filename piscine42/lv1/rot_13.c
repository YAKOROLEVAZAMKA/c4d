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
        int i = 0;
        if (argv[1][i] == '\0')
        {
            puts("\n");
            return (0);
        }
        while(argv[1][i] != '\0')
        {
            t = argv[1][i];
            if ((t >= 65 && t <= 77) || t >=97 && t <= 109)
            {   
                putchar(t+13);
                i++;
            }
            else if ((t > 77 && t <= 90) || t > 109 && t <= 122)
            {
                putchar(t-13);
                i++;
            }
            else
            {
                putchar(t);
                i++;
            }
            
        }
    }
    puts("\n");
    return (0);
}