void malloc_snake(char **snake, char *field, int xfield, int yfield)
{
    int i;

    field = (char *)malloc(sizeof(char) * xfield * yfield);
    snake = (char **)malloc(sizeof(char*)* xfield);
    i = 0;

    while (i < yfield)
    {
        snake[i] = (char *)malloc(sizeof(char) * xfield);
        i++;
    }
    printf("123");
}