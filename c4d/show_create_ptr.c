#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *ptr)
{
    int x, r;

    srand((unsigned)time(NULL));

    for(x = 0; x < 10; x++)
    {
        r = rand();
        r = r % 10;
        *ptr = r;
        //printf("%d\n", *ptr);
        ptr++;
    }
    *ptr = '\0';
}

void show (int *ptr)
{
    int x;

    for (x = 0; x < 10; x++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
}

int main(void)
{
    int abc[10] = {23, 345, 75, 234, 567, 34, 123, 65, 67, 76};
    int *p;

    p = abc;
    create(p);
    p = abc;
    show(p);

    return (0);
}