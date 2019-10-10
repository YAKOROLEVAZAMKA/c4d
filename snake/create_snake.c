void create_snake(char **snake, int xfield, int yfield, int *xp, int *yp, char mfield)
{   
    int xpos;
    int ypos;
    int r;
    
    int check = 0;

    while (check == 0)
    {
        srand((unsigned)time(NULL));
        r = rand();
        xpos = (r % (xfield - 1));
        r = rand();
        ypos = (r % (yfield - 1));

        if (snake[ypos][xpos] == mfield)
            check = 1;
    }

    *xp = ypos;
    *yp = xpos;

    snake[*yp][*xp] = 'Q';

}