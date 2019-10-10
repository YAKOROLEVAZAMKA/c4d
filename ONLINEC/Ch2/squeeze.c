#include <unistd.h>
#include <stdio.h>

void ft_squeeze(char s[], char c);
//char ft_putchar(char c);

//char ft_putchar(char c)
//{
//    write (1, &c, 1);
//}

void ft_squeeze(char s[], char c)
{
 /*   int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
            s[j++] = s[i];
    }
        i++;
        s[i] = '\0'; */

    int i, j;

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
            i++;
        }
        else
        {
            i++;
        }
    }
    s[j] = '\0';
}

int main(int argc, char **argv)
{
    int p;
        
    if (argc != 2)
    {
        printf ("argc is not 2");
    }
    else
    {
        char p;

        scanf ("%c", &p);
        ft_squeeze(argv[1], p);
        printf("1 - %s\n", argv[1]);
        //printf("2 - %s\n", argv[2]);
    }
    return (0);
}