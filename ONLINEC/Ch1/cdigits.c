#include <stdio.h>

int main(void)
{
    int c, i ,nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
    {
       ndigit[i] = 0;
    }
  //  i = 0;
  //  while (i < 10)
  //  {
  //      ndigit[i] = 0;
  //      i++;
  //  }

    while ((c = getchar()) != EOF)
    {
        if (c >='0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf("%d", ndigit[i]);
    printf(", tab-space-enter = %d, others =%d\n", nwhite, nother);
    return (0);
}