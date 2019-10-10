void checkwin(int snake_length, int xfield, int yfield)
{
    if (snake_length == yfield * (xfield - 1))
    {
        puts("\nYou win!!!");
        printf("Score = [%d]", snake_length);
        exit (0);
    }
}   