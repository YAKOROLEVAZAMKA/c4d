#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char a[] = "qwertyuioplkjhgfdazxcvbnm";
    int i = 0;
    int n;

    while (a[i] != '\0')
    {
        i++;
    }

    n = i;

    for (i = 0; i < n; i++)
       printf("%6d %c", a[i], (i%10 == 9 || i == n-1) ? '\n' : ' ');
    return (0);
}