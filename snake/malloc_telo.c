void malloc_telo(int **telo_x, int **telo_y, int xfield, int yfield)
{
    int i;
    telo_x = (int **)malloc(sizeof(int*)* xfield * yfield);

    i = 0;
    while (i < yfield*xfield)
    {
        telo_x[i] = (int *)malloc(sizeof(int) * 1);
        i++;
    }

    telo_y = (int **)malloc(sizeof(int*)* xfield * yfield);

    i = 0;
    while (i < yfield*xfield)
    {
        telo_y[i] = (int *)malloc(sizeof(int) * 1);
        i++;
    }
}