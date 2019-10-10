#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

#include "CountStrings.c"
#include "CountStringsLength.c"
#include "createcorrfile.c"
#include "CopyFileToArray.c"




int CountStrings(char *file_name);
void CountStringsLength(char *file_name, int strlength[]);
void createcorrfile(char file_name_corr[], int count_strings, char **string);
void copyfiletoarray(char file_name[], char *field, char **string, int *strlength);


int main(void)
{   
    char *locale = setlocale(LC_ALL, "");
    char file_name[] = "doubles.txt"; // INPUT FILE
    char file_name_corr[] = "correct.txt"; // OUTPUT FILE
    int count_strings = 0;  // AMOUNT OF STRINGS @ARRAY
    int *strlength;  // LENGTH OF STRINGS @ARRAY

    static char **string; // ARRAY FROM FILE
    char *field; 
    int j;

    int i;
    char Delimeter = '|';
    int countchars = 0;
    int DelimeterCount[100000];
    char fixstring[500][500];
    //char **fixstring;
    int p = 1;
    int j2;
    int i2;
    int p2 = 0;

    int nol;
    int substrings = 0;
    int allowcpy = 0;

    

    
    count_strings = CountStrings(file_name) + 1;

    strlength = (int *)malloc(sizeof(int) * count_strings);

    for (i = 0; i < count_strings; i++)
    {
        strlength[i] = 0;
        printf("%d string = %d chars\n", i, strlength[i]);
    }
    strlength[i] = '\0';
    
    CountStringsLength(file_name, strlength);
    printf("Number of strings = %d\n", count_strings);

    field = (char *)malloc(sizeof(char) * 501);

    string = (char **)malloc(sizeof(char*)* count_strings);
    for(i = 0; i < count_strings; i++)
        string[i] = (char *)malloc(sizeof(char) * strlength[i]);


    copyfiletoarray(file_name, field, string, strlength);
    free(field);


    
    j = 0;
    i = 0;

    while (j < count_strings)
    {
        while(string[j][i] != '\0')
        {
            if (string[j][i] == Delimeter)
            {
                DelimeterCount[p] = i;
                printf("%d - %d\n", p, DelimeterCount[p]);
                p++;
            }
            i++;
        }
        DelimeterCount[++p] = '\0';
        p2 = p;
        p = 1;
        putchar('\n');

        i2 = 0;
        j2 = 0;
        if (string[j][0] != Delimeter)
                i = 0;
        else
        {
            i = DelimeterCount[p] + 1;
            p++;
        }
        printf("\"%s\"\n", string[j]);
        while (p2 > p)
        {
            while(string[j][i] != Delimeter && string[j][i-1] != '\0')
            {
                fixstring[j2][i2] = string[j][i];
                printf("i = %d\n", i);
                i++;
                i2++;
            }
            fixstring[j2][i2] = '\0';
            printf("\"%s\"\n", fixstring[j2]);
            j2++;
            i2 = 0;

            i = DelimeterCount[p] + 1;
            p++;
        }
        strcpy(fixstring[j2], "END");
        printf("\"%s\"\n", fixstring[j2]);


        string[j][0] = '\0';
        for (nol = 0; strcmp(fixstring[nol], "END") != 0; nol++)
            substrings++;
        printf("%d\n", substrings);


        j2 = 0;
        //nol = 1;
        while (strcmp(fixstring[j2], "END") != 0)
        {
            
            nol = j2 + 1;
            printf("%d\n", substrings);
            while (nol < substrings)
            {
                if (strcmp(fixstring[j2], fixstring[nol]) == 0)
                {
                    nol = substrings + 1;
                    allowcpy = 1;
                }
                else
                {
                    nol++;
                }
                
            }
            if (allowcpy == 0)
            {
                strcat(string[j], "|");
                strcat(string[j], fixstring[j2]);
            }
            allowcpy = 0;
            
            j2++;
            
        }



        putchar('\n');

        j++;
        i = 0;
        p = 1;
        substrings = 0;
    }


    createcorrfile(file_name_corr, count_strings, string);
    return (0);
}