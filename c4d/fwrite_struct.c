#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    struct entry{
        char actor[32];
        int year;
        char title[32];
    };
    
    //struct entry bond1;
    struct entry bond2;
    struct entry bond3;
    FILE *fh;

    strcpy(bond2.actor, "DAUNCHTOLI");
    bond2.year = 2020;
    strcpy(bond2.title, "777");

    strcpy(bond3.actor, "ya_IEBOLL");
    bond3.year = 1990;
    strcpy(bond3.title, "1121");

    

    fh = fopen("bond.db", "w");
    if (!fh)
        exit (1);
    fwrite(&bond2, sizeof(struct entry), 1, fh);
    fwrite(&bond3, sizeof(struct entry), 1, fh);
    fclose(fh);
    puts("Entry has been saved!");
    return (0);
}