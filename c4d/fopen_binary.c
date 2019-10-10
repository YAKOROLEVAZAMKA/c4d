#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fh;
    int highscore[5];
    int x;

    fh = fopen("scores.dat", "r");
    if(!fh)
        exit(1);
    fread(highscore, sizeof(int),5,fh);
    fclose(fh);

    for (x=0; x < 5; x++)
        printf("%d place = %d points!\n", x+1, highscore[x]);
    return (0);
}