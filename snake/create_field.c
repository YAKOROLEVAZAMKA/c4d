#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fh;

    fh = fopen("field.txt", "w");
    if  (fh == NULL)
    {
        puts("Error");
        exit (1);
    }

    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            fputs(".", fh);
        }

        fputs("\n", fh);
        
    }
    fclose(fh);
    return (0);
}