int ypos_ini(int yfield)
{   
    //int xpos;
    int ypos;
    int ra;


    srand((unsigned)time(NULL));
    //r = rand();
    //xpos = (r % (xfield - 1)) + 1;
    ra = rand();
    ypos = (ra % yfield);

    return (ypos);
}