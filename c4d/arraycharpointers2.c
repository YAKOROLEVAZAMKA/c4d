#include <stdio.h>

int main(void)
{
    char alpha = 'A';
    int i;
    char *ptr;

    ptr = &alpha;

    for(i = 0; i < 26; i++)
        putchar((*ptr)++);
    putchar('\n');
    return (0);
}