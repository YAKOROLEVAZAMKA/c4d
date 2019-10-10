#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int pidr;
    int first;

    sign = 0;
    //first = 0;

    while(str[i] != '\0')
    {
        if (str[i] == '-' && (str[i+1] >= 48 && str[i+1] <= 57))
            sign = 1;
        if (str[i] >= 48 && str[i] <= 57)
        {
            while (str[i] >= 48 && str[i] <= 57)
            {
                //if (first == 0)
                //{
               //     pidr = (str[i] - '0');
               //     first = 1;
               // }
               // else
               // {
                    pidr = (pidr * 10) + (str[i] - '0');
                //}
                i++;
            }
            break;
        }
        i++;
    }
    if (sign == 0)
        return (pidr);
    if (sign == 1)
        return (-pidr); 
}



int main(int argc, char **argv)
{
    if (argc != 2)
    {
        putchar('\n');
        return (0);
    }
    else
    {
        printf("%s * 4 = %d", argv[1], ft_atoi(argv[1])*4);
        
    }
    putchar('\n');
    return (0);    
}