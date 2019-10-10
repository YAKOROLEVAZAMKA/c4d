#include <stdio.h>
#include <unistd.h>

char ft_putchar(char c)
{
    write (1, &c, 1);
}

int main(void)
{
    char alpha[27];
    char *ptr;
    int i;
    
    ptr = alpha;

    for (i = 0; i < 27; i++)
    {
        if (i == 26)
        {
            *ptr = '\0';
            ptr++;
        }
        else
        {
        *ptr++ = i + 'A';
        //ptr++;
        }
    }

    ptr = alpha;

    for (i = 0; i < 26; i++)
    {
        //printf("%d%c |", i+1, alpha[i]);
        ft_putchar (*ptr++);
        //ptr++;
    }

    return (0);
}