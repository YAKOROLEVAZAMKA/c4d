#include <stdio.h>

void bubblechar(char s[])
{
    int i, j;

    int p = 0;

    for (p = 0; s[p]; p++)
        ;
    printf("p = %d\n", p);

    i = 0;
    j = 1;

    while(i < p)
    {
        if (s[i] < s[j])
        {
            char c;

            c = s[i];
            s[i] = s[j];
            s[j] = c;

            i = 0;
            j = 1;
        }
        else
        {
            i++;
            j++;
        }
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("S@S@I");
        return (0);
    }
    else
    {
        bubblechar(argv[1]);
        printf("%s", argv[1]);
    }
    return (0);
}