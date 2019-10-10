#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    struct entry {
        char actor[32];
        int year;
        char title[32];
    };
    struct entry bond;
    FILE *fh;


    char s[3][500];
    int i = 0;


    fh = fopen("bond.db", "r");
    if(!fh)
        exit (1);
    
    while(fread(&bond, sizeof(struct entry), 1, fh))
    {
        strcpy(s[i], bond.actor);
        printf("%s\t%d\t%s\n", bond.actor, bond.year, bond.title);
        i++;
    }
    fclose(fh);
    for (i = 0; i < 2; i++)
    {
        printf("%s\n", s[i]);
    }
    return(0);
}