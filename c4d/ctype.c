#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("S@S@I");
        return (0);
    }
    else
    {
        int i, alpha, blank, punct;

        alpha = blank = punct = 0;

        i = 0;
        while(argv[1][i])
        {
            if(isalpha(argv[1][i]))
                alpha++;
            if(isblank(argv[1][i]))
                blank++;
            if(ispunct(argv[1][i]))
                punct++;
            i++;
        }
        printf("Alpha - %d\n", alpha);
        printf("Blank - %d\n", blank);
        printf("Punct - %d\n", punct);
    }
    return (0);
}