#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("%s", argv[0]);
        return (0);
    }

    int count;

    for (count = 0; argv[count]; count++)
        ;

    int x, y;

    y = 0;

    for(x = 0; x < count; x++)
    {
        while (argv[x][y])
        {
            putchar(*(*(argv+x)+y));
            y++;
        }
        y = 0;
        putchar('\n');
    }
    return (0);
}