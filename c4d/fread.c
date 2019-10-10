#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    char *locale = setlocale(LC_ALL, "");

    FILE *handle;
    int highscore[5];
    int x;

    handle = fopen("scores.dat", "r");
    if (!handle)
        exit (1);

    fread(highscore, sizeof(int), 5, handle);
    fclose(handle);

    for (x = 0; x < 5; x++)
    {
        printf("Hi-Scores %d - %d\n", x+1, highscore[x]);
    }   

    return (0);
}