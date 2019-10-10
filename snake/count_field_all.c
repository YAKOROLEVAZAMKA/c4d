int count_field_all(char *field_name)
{
    FILE *fh;
    int ch;

    int all = 0;

    fh = fopen(field_name, "r");
    if (fh == NULL)
        exit (1);

    while ((ch = fgetc(fh)) != EOF)
    {
       // putchar(ch);
              
        all++;
    }
    fclose (fh);

    return (all);
}