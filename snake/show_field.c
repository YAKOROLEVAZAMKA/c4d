void show_field(int yfield, char **snake)
{
    system("cls"); // sys("clear"); for UNIX
    int j, p;

    j = 0;
    p = 0;

    puts("\n");
    
    while (j < yfield)
    {
        while (snake[j][p] != '\0')
        {
            putchar(snake[j][p]);
            p++;
        }
        p = 0;
        j++;
    }
    
}