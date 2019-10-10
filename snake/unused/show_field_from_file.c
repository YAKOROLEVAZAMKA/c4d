#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fh;
    char ch;

    fh = fopen("field.txt", "r");
    if (fh == NULL)
        exit (1);

    while ((ch = fgetc(fh)) != EOF)
    putchar(ch);
    fclose (fh);
    return (0);
}