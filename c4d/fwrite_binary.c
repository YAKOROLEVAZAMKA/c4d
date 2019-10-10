#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    char *locale = setlocale(LC_ALL, "");

    FILE *handle;
    int highscore[5];
    int x;

    handle = fopen("scores.dat", "w");
    if (!handle)
        exit (1);
    
    

    for(x = 0; x < 5; x++)
    {
        printf("Whats score [%d]& ", x+1);
        scanf("%d", &highscore[x]);
    }
    fwrite(&highscore, sizeof(int), 5, handle);
    //fprintf(handle, "%d", highscore);
    fclose(handle);
    puts ("Дарова!");

    return (0);
}