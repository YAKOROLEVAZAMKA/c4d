#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;

    char t;

    if (argc != 2)
    {
        putchar('\n');
        return (0);
    }
    else
    {
        while(argv[1][i] != '\0')
        {
            t = argv[1][i];
            if (t >= 65 && t <= 90)
                t = 90 + 65 - t;
            if (t >= 97 && t <= 122)
                t = 122 + 97 - t;
            putchar(t);
            i++;
        }
    }
    putchar('\n');
    return (0);
}