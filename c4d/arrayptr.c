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

    int x;

    /*for(x = 0; x < 5; x++)
        puts(fruit[x]);
    return (0);*/

    for(x = 0; x < 5; x++)
        puts(*(fruit+x));
    return (0);
}