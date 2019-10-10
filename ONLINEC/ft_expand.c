#include <stdio.h>
#include <unistd.h>

void ft_expand(char c[], char s[])
{
    int i, j, k;

    i = j = 0;
    while (c[i] != '\0')
    {
        if (c[i] == '-' && c[i-1] && c[i+1] != '\0')
        {
            k = i - 1;
            //printf("%c\n", c[k] - 'a' + 'a');
            //printf("%c\n", c[i + 1] - 'a' + 'a');
            char x, y;
            x = c[k] - 'a' + 'b';
            y = c[i + 1] - 'a' + 'a';
            //if (x + 1 > y)
            //    s[j++] = '-';
            //else
            //{
                while (x < y)
                //while (c[k] < c[i+1])
                {
                    s[j++] = x;
                    //printf("%c\n", c[k] - 'a' + 'a');
                    x++;
            //    }
            }
            i++;
        }
        else
        {
        s[j++] = c[i++];
        }
    }
    s[j] = '\0';
}


int main(void)
{
    char c[500];
    char s[500];
    scanf("%s", &c);
    ft_expand(c, s);
    printf("\n%s", s);

    //char d = 'z';
   // printf("%d", d);
    return (0);
    
}



        //printf("%d\n", i+1);
        /*{
        
            if( c[i-1] - '0' >= 'a' && c[i-1] - '0' < 'z' && c[i+1] - '0' >= 'c' && c[i+1] - '0' < 'z')
            {
                k = i;
                while (c[k-1] -'0' < c[i+1] - '0')
                {
                    p = k + 1;
                    s[j++] = p;
                    k++;
                }
            }
            else
            {
                s[j++] = '-';
                i++;
            }
        }*/