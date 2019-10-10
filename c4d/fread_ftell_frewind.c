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
    int count = 0;

    fh = fopen("bond.db", "r");
    if(!fh)
        exit(1);
    
    while(fread(&bond, sizeof(struct entry), 1, fh))
    {
        printf("%s\t%d\t%s\n", bond.actor, bond.year, bond.title);
        if (ftell(fh) > sizeof(struct entry))
        rewind(fh);
        count++;
        if (count > 10)
            break;  
    }
    fclose(fh);
    return (0);
}