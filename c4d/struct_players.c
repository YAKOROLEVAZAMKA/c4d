#include <stdio.h>

int main(void)
{
    struct scores
    {
        char name[32];
        int score;
    } player2;

    struct scores2
    {
        char name[32];
        int score;
    };

    struct scores player[4];
    int x, y;
    

    for (x = 0; x < 4; x++)
    {
        printf("%d", x+1);
        scanf("%s", player[x].name);
        printf("score: ");
        scanf("%d", &player[x].score);
    }

    char lul[32];
    x = 0;
    y = 1;
    while (x < 4)
    {
        if (player[x].score < player[y].score)
        {
            int z;

            player2 = player[x];
            player[x] = player[y];
            player[y] = player2;
            x = 0;
            y = 1;
        }
        else
        {
            x++;
            y++;
        }
    }

    puts("Info");
    printf("#\tName\tScores\n");
    for (x = 0; x < 4; x++)
    {
        printf("%d\t%s%5d\n", x+1, player[x].name, player[x].score);
    }
    return (0);
}