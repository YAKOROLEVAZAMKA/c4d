void get_field(char **snake, int xfield)
{
    FILE *fh;
    char *field;
    int j = 0;

    fh = fopen("field.txt", "r");
    if  (fh == NULL)
    {
        puts("Error");
        exit (1);
    }

    j = 0;
    

    while (fgets(field, xfield+1, fh))
    {
        strcpy(snake[j], field);
        printf("[%d] - %s", j, snake[j]);

        j++;
    }

   
    fclose(fh);


    /*FILE *fh;
    char *field;
    int j = 0;

    fh = fopen("field.txt", "r");
    if  (fh == NULL)
    {
        puts("Error");
        exit (1);
    }
  
    while (fgets(field, xfield+1, fh))
    {
        strcpy(snake[j], field);
        printf("[%d] - %s", j, snake[j]);
        j++;
    }

   
    fclose(fh);*/

}