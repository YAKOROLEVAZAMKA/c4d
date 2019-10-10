#include <stdio.h>
#include <unistd.h>

void ft_escape_reverse(char s[], char t[])
{
    int i, j;

    //i = j = 0;
    //while (s[i] != '\0')
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '\\')
        {
            i++;
            switch(s[i])
            {
                case 'n' :
                    t[j++] = '\n';
                    break;
                case 't' :
                    t[j++] = '\t';
                    break;
                default :
                    t[j++] = '\\';
                    t[j++] = s[i];
                    break;
            }
        }
        else
        {
            t[j++] = s[i];
        }
    }
    t[j] = '\0';
}

int main(void)
{
    char t[500];
    //char lal[500] = {"123\n  asdsd \t  228"};
    char lal[500] = {"123\\n  asdsd \\t  228"};
    printf("%s\n", lal);

    ft_escape_reverse(lal, t);
    printf("%s", t);
    
    puts("\n");
    printf("%s", lal);
    return (0);
}