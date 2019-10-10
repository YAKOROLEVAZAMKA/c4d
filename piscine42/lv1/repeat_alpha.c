#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("argc = %d", argc+1);
        return (0);
    }
    else
    {
        int i;
        int counter;
        i = 0;

        while(argv[1][i] != '\0')
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
            {
                counter = argv[1][i] - 64;
            }
            else if (argv[1][i] >= 97 && argv[1][i] <= 122) 
            {
                counter = argv[1][i] - 96;
            }
            else 
                counter = 1;
            
            while (counter > 0)
            {
                putchar(argv[1][i]);
                counter--;
            }
            i++;
        }
    }
    putchar('\n');
    return (0);
}
