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
        int i;
        i = 0;

        if (argv[1][i] == '\0')
            return (0);

        while(argv[1][i] != '\0')
        {
            i++;
        }
        i--;
        
        while(argv[1][i] != '\0')
        {
            if (i == 0)
            {
                putchar(argv[1][i]);
                argv[1][i] = '\0';
            }
            else
            {
                putchar(argv[1][i]);
                i--;  
            }           
        }
    }
    putchar('\n');
    return (0);
}