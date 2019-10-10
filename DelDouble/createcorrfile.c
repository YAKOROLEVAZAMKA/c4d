void createcorrfile(char file_name_corr[], int count_strings, char **string)

{
    int j;
    FILE *fh;

    fh = fopen(file_name_corr, "w");
    if  (fh == NULL)
    {
        puts("Error");
        exit (1);
    }

    for (j = 0; j < count_strings; j++)
    {
        fprintf (fh, "%s", string[j]);   
    }
    fclose(fh);

}