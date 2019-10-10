#include <stdio.h>

int main(int argc, char **argv)
{   
    char *ptr;

    if (argc != 2)
    {
        return (0);
    }
    else
    {
        ptr = argv[1];

        /*while(*ptr)
        {
            putchar(*ptr);
            ptr++;
        }*/
        while (putchar(*ptr++))
            ;
    }
    return (0);
}