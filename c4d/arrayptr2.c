#include <stdio.h>

int main(void)
{
    char *fruit[] = {
            "apple",
            "banana",
            "pineapple",
            "watermelon",
            "melon"    
    };

    int x, y;

    y = 0;

    for(x = 0; x < 5; x++)
    {
        while (fruit[x][y])
        {
            putchar(*(*(fruit+x)+y));
            y++;
        }
        y = 0;
        //putchar(*(*(fruit+x)+1));
        putchar('\n');
    }
    return (0);
}