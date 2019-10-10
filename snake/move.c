void move (char ***snake, int *eat, int *xpos, int *ypos, int *telo_x, int *telo_y, char snake_head, char mfield, int *sn)
{
    int tempx;
    int tempy;
    int tempx2;
    int tempy2;

    if (*eat == 1)
    {
        tempx2 = telo_x[*sn];
        tempy2 = telo_y[*sn];
        telo_x[*sn] = tempx;
        telo_y[*sn] = tempy;
        *snake[telo_y[*sn]][telo_x[*sn]] = 'o';
        tempx = tempx2;
        tempy = tempy2;
    }
    if (*eat == 0)
    { 
        tempx2 = telo_x[*sn];
        tempy2 = telo_y[*sn];
        telo_x[*sn] = tempx;
        telo_y[*sn] = tempy;a
        *snake[telo_y[*sn]][telo_x[*sn]] = 'o';
        tempx = tempx2;
        tempy = tempy2;
        *snake[tempy][tempx] = mfield;
    }

}