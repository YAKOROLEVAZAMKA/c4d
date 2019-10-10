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

    fh = fopen ("bond.db", "r");
    if (!fh)
        exit (1);
    fseek(fh,sizeof(struct entry)*1, SEEK_SET);
    fread(&bond, sizeof(struct entry), 1, fh);
    printf("%s\t%d\t%s\n", bond.actor, bond.year, bond.title);
    fclose (fh);
    return (0);
}