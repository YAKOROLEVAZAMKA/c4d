#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fh;
    char buffer[64];

    fh = fopen("hello.txt", "r");
    if (fh == NULL)
        exit (1);

    while (fgets(buffer, 64, fh))
        printf("%s", buffer);
    fclose(fh);
    return (0);
}