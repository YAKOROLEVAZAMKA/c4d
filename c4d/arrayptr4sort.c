#include <stdio.h>
#include <string.h>

int main(void)
{
    char *fruit[] = {
            "melon",
            "banana",
            "pineapple",
            "watermelon",
            "apple"    
    };

    char *temp;
    int a, b, x;

    for(a = 0; a < 4; a++)
        for (b = a + 1; b < 5; b++)
            if (strlen(*(fruit + a)) > strlen(*(fruit + b)) )
            {
                temp = *(fruit + a);
                *(fruit + a) = *(fruit + b);
                *(fruit + b) = temp;
            }
    
    for (x = 0; x < 5; x++)
        puts (fruit[x]);

    return (0);
}