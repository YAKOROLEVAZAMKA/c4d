#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        puts("S@S@I");
        return (0);
    }
    else
    {
        int i;

        while (argv[1][i])
        {
            printf("%c - %p\n", argv[1][i], &argv[1][i]);
            i++;
        }
    }
    return (0);
}