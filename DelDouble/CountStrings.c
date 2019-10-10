int CountStrings(char *file_name)
{
    FILE *fh;
    int ch;

    int all = 0;

    fh = fopen(file_name, "r");
    if (fh == NULL)
        exit (1);

    while ((ch = fgetc(fh)) != EOF)
    {
        if (ch == '\n')      
            all++;
    }
    fclose (fh);

    return (all);
}