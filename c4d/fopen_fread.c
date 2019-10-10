#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char filename[255];
    FILE *dumpme;
    int x, c, i;

    if (argc == 2)
    {
        i = 0;
       // strcpy(filename, argv[1]);
        while (argv[1][i] != '\0')
        {
            filename[i] = argv[1][i];
            i++;
        }
        filename[i] = '\0';
    }
    else
    {
        printf("Enter filename: ");
        scanf("%s", filename);
    }
    dumpme = fopen(filename, "r");
    if(!dumpme)
    {
        printf("No such file with filename \"%s\".\n", filename);
        exit (1);
    }
    
    x = 0;
    while ((c = fgetc(dumpme)) != EOF)
    {
        printf("%02X ", c);
        x++;
        if(!(x%16))
            putchar('\n');
    }
    putchar('\n');
    fclose(dumpme);
    return(0);
}