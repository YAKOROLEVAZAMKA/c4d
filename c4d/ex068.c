#include <unistd.h>
#include <stdio.h>

char ft_putchar(char c)
{
    write (1, &c, 1);
}

int main(void)
{
    int sha = 701;
    int mes = 709;
    int abe = 719;

    printf("sha = %d\n", sha);
    printf("mes = %d\n", mes);
    printf("abe = %d\n", abe);
    return (0);
}