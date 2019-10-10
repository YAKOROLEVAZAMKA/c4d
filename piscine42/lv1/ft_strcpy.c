#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *s1)
{
    int i;
    i = 0;

    while(s1[i] != '\0')
        i++;

    //printf("i = %d", i);
    i++;
    return (i);
}

char *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;

    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        //putchar(s2[i]);
        i++;
    }
    return(s2);
}

int main (int argc, char **argv)
{
    char *str;

    str = (char*)malloc(sizeof(char) * ft_strlen(argv[1]));

    if (argc != 2)
    {
        puts("azaza");
        return (0);
    }
    else
    {
        printf("%s", ft_strcpy(argv[1], str));
    }

    
    return (0);
}