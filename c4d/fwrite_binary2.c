#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fh;
    int highscore[5];
    int count = 0;

    fh = fopen("scores.dat", "w");
    if (!fh)
        exit (1);
    
    printf("enter numbers:");

    while(count < 5)
    {
        scanf ("%d", &highscore[count]);
        fwrite(&highscore[count], sizeof(int), 1, fh);
        count++;
    }

    fclose(fh);
    puts("Scores has been saved!");
    return (0);
}