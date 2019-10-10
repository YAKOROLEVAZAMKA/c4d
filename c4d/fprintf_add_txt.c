#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fh;

    fh = fopen("hello.txt", "a");
    if (fh == NULL)
        exit (1);
    
    fprintf(fh, "Added l8r\n");
    fclose(fh);
    return (0);
}