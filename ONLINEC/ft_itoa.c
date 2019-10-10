#include <stdio.h>
#include <unistd.h>

void ft_reverse(char s[])
{
    int i;

    for(i = 0; s[i] != '\0'; i++)
        ;
    //printf("s - %s\n", s);
    i--;
    //printf("s - %s\n", s);
        //printf("i = %d\n", i);
        //printf("s - %s\n", s);
        //write (1, &s[i], 1);
    int n, j;
    j = n = 0;
    char temp;

    //int z;
    
    //for (z = i; z > 0; z--)
    //    write(1, &s[z], 1);

    for (n = i/2 + 1; n > 0; n--)
    {
        //printf("%d\n", n);
        temp = s[i];
       // printf("%c\n", temp);
        s[i] = s[j];
       // printf("%c\n", s[i]);
        //printf("%c\n", s[j]);
        s[j] = temp;
        i--;
        j++; 
    }
    //printf("%s\n", s);
}

void ft_itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)
        n =-n;
    i = 0;

    do
    {
        s[i++] = n %10 + '0';
    }
    while ((n /= 10) > 0)
        ;
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    //printf("s - %s\n", s);
    ft_reverse(s);
}

int main(void)
{
    signed int i;
    char s[500];

    scanf("%d", &i);
    ft_itoa(i, s);
    printf("\n%s", s);
    return (0);
}