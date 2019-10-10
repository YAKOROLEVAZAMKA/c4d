int count_field_x(char *field_name)
{
    FILE *fh;
    int ch;

    int x = 0;

    fh = fopen(field_name, "r");
    if (fh == NULL)
        exit (1);

    while ((ch = fgetc(fh)) != '\n')
    {
        x++;
    }
    x++;
    fclose (fh);

    return (x);
}