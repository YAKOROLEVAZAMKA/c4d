void create_food(char **snake, int xfield, int yfield, char mfield, char food)
{   
    int xpos;
    int ypos;
    int r;
    
    int check = 0;
    int pohui;


    for (check = 0; check < 1; pohui++)
    {
        //difftime(1,2);
        srand((unsigned)time(NULL));
        r = rand();
        xpos = (r % (xfield - 1));
        r = rand();
        ypos = (r % yfield);

        if (snake[ypos][xpos] == mfield)
            check = 1;
        else
            check = 0;  
    }
    snake[ypos][xpos] = food;

}