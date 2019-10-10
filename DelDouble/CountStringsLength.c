void CountStringsLength(char *file_name, int strlength[])
{
    FILE *fh;
    int ch;
    int i;

    int all = 0;

    fh = fopen(file_name, "r");
    if (fh == NULL)
        exit (1);

    while ((ch = fgetc(fh)) != EOF)
    {
        if (ch == '\n')
        {   
            strlength[i]++;
            strlength[i]++;
            i++;
        }
        strlength[i]++;
    }
    fclose (fh);

}