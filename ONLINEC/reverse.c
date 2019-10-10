#include <stdio.h>

int ft_strlen(char s[])

{
    int i;

    for (i = 0; s[i] != 0; i++)
        ;
    return (i);
}

void ft_reverse(char s[])

{
    int c, i, j;

    for(i = 0, j = ft_strlen(s) - 1; i < j; i++, j --)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}





int main (int argc, char **argv)
{
    if (argc != 2)
        return 0;
    else
    {
        printf("len - %d\n", ft_strlen(argv[1]));
        ft_reverse(argv[1]);
        printf("reverse - %s\n", argv[1]);
    }
    return (0);
}
    