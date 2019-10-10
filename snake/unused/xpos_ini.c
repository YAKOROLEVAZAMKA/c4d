int xpos_ini(int xfield)
{   
    int xpos;
    //int ypos;
    int r;


    srand((unsigned)time(NULL));
    r = rand();
    xpos = (r % (xfield - 1));
    //r = rand();
    //ypos = (r % yfield - 1) + 1;

    return (xpos);
}