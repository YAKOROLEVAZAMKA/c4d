void move(char **snake, int x, int y, int yfield)
{
    int ch;


    int choice ='\0';
    
    while (choice != 'Q')
    {
        ch = getchar();
        while (getchar() != '\n')
            ;
        toupper(ch);

        switch (choice)
        {
                case 'A':
                    snake[x][y] = '.';
                    snake[x-1][y] = '.';
                    show_field(yfield, snake);
                    break;
                case 'W':
                    
                    show_field(yfield, snake);
                    break;
                case 'D':
                    
                    show_field(yfield, snake);
                    break;
                case 'S':

                    show_field(yfield, snake);
                    break; 
                case 'Q':
                    break;    
                default:        
                    break;
        }
    }

}