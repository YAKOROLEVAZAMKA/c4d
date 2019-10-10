#include <stdio.h>
#include <unistd.h>

void ft_escape(char s[], char t[]);

void ft_escape(char s[], char t[])
{
    int i, j;

    //i = j = 0;
    //while (s[i] != '\0')
    for (i = j = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
            case '\n' :
                t[j++] = '\\';
                t[j++] = 'n';
                //i++;
                break;
            case '\t' :
                t[j++] = '\\';
                t[j++] = 't';
                //i++;
                break;
            default :
                t[j++] = s[i];
                //i++;
                break;
        }
    }
    t[j] = '\0';
}

int main(int argc, char **argv)
{
    char t[500];
    char lal[500] = {"123\n  asdsd \t  228"};

    if (argc != 2)
    {
        printf("argc != 2");
    }
    else
    {
        ft_escape(lal, t);
        printf("%s", t);
    }
    puts("\n");
    printf("%s", lal);
    return (0);
}