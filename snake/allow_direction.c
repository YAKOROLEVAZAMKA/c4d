int allow_direction(int direction, int snake_length)
{
    int allow;

    allow = 0;
    if (snake_length > 1)
    {
        switch(direction)
        {
            case 'a':
                allow = 1;
                break;
            case 'w':
                allow = 2;
                break;
            case 'd':
                allow = 3;
                break;
            case 's':
                allow = 4;
                break;
            default:
                break;
        }
    }
    return (allow);
}