#include <unistd.h>
#include <stdio.h>

void ft_squeeze(char s[], char c[]);

void ft_squeeze(char s[], char c[])
{
    int i = 0;
    int j = 0;
    int p = 0;

    while (s[i] != '\0')
    {
        j = 0;
        while (c[j] != '\0')
        {
            if (s[i] != c[j])
                j++;
            else
            {
                i++;
                j = '\0';
                //break;
            }
        }
        s[p++] = s[i];
        i++;
    }
    s[p] = '\0';
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf ("%s", argv[0]);
    }
    else
    {
        ft_squeeze(argv[1], argv[2]);
        printf("%s", argv[1]);
    }
    return (0);
}