#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);
    switch(a)
    {
       case 1:
            puts("123");
            break;
       case 2:
            puts("312");
            break;
       default:
            puts("AAAAAAAA");
            break;
    }
    return (0);
}