#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int x, y, result;
    char t;

    if (argc != 4)
    {
        putchar('\n');
        return (0);
    }
    else
    {   
        if (strlen(argv[2]) != 1)
        {
            puts("TI WHO DICH!!!");
            return (0);
        }
        

        x = atoi(argv[1]);
        t = argv[2][0];
        y = atoi(argv[3]);

        switch(t)
        {
            case '+':
                result = x + y;
                break;
            case '-':
                result = x - y;
                break;
            case '*':
                result = x * y;
                break;
            case '/':
                result = x / y;
                break;
            case '%':
                result = x % y;
                break;
            default:
                break;
        }

    }
    printf("result = %d", result);
    putchar('\n');
    return (0);
}