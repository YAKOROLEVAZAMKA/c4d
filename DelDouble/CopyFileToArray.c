void copyfiletoarray(char file_name[], char *field, char **string, int *strlength)
{
    FILE *fh;

    int i, j, t;

    fh = fopen(file_name, "r");
    if  (fh == NULL)
    {
        puts("Error");
        exit (1);
    }

    j = 0;
    i = 0;
    t = 0;

    while (fgets(field, strlength[i], fh))
    {
        strcpy(string[j], field);
        //for (t = 0; string[j][t]; t++)
        //    ;
        //string[j][t] = '\0';
        //printf("[%d] - %s, %d\n", j, string[j], strlen(string[j]));  //SHOW_FIELD_COPIED_TO_**STRING
        i++;
        j++;
    }
    fclose(fh);
}