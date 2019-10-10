int pressedbutton(void)
{
    int ch;
    
    ch = getchar();
    while (getchar() != '\n')
        ;
    return(toupper(ch));
}