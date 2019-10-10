int checkdead(char **snake, int xpos, int ypos, int direction, char mfield, char food, int *eat)
{
    switch(direction)
    {
        case 'a':
            xpos = xpos - 1;
            if (snake[ypos][xpos] == mfield || snake[ypos][xpos] == food)
            {
                if (snake[ypos][xpos] == food)
                    *eat = 1;
                return (0);
            }
            else
                return (1);
            break;
        case 'w':
            ypos = ypos - 1;
            if (snake[ypos][xpos] == mfield || snake[ypos][xpos] == food)
            {
                if (snake[ypos][xpos] == food)
                    *eat = 1;
                return (0);
            }
            else
                return (1);
            break;
        case 'd':
            xpos = xpos + 1;
            if (snake[ypos][xpos] == mfield || snake[ypos][xpos] == food)
            {
                if (snake[ypos][xpos] == food)
                    *eat = 1;
                return (0);
            }
            else
                return (1);
            break;
        case 's':
            ypos = ypos + 1;
            if (snake[ypos][xpos] == mfield || snake[ypos][xpos] == food)
            {
                if (snake[ypos][xpos] == food)
                    *eat = 1;
                return (0);
            }
            else
                return (1);
            break;
        default:
            break;
    }

    return (0);
}