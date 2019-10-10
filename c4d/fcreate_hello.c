#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fh;

    fh = fopen("hello.txt", "w");
    if  (fh == NULL)
    {
        puts("Error");
        exit (1);
    }

    fprintf(fh, "Look here!\n");
    fputs("We write here.\n", fh);
    fclose(fh);
    return (0);
}