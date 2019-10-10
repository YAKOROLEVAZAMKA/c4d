#include <stdio.h>

int main(void)
{
    char tictactoe[3][3][3];
    int x, y, z;

    for(x = 0; x < 3; x++)
        for(y = 0; y < 3; y++)
            for(z = 0; z < 3; z++)
                tictactoe[x][y][z] = '.';
    tictactoe[1][1][1] = 'X';

    for(z = 0; z < 3; z++)
    {
        printf("Level %d\n", z+1);
        for (x = 0; x < 3; x++)
        {
            for (y = 0; y < 3; y++)
                printf("%c\t", tictactoe[x][y][z]);
            putchar('\n');
        }
    }
    return (0);
}
