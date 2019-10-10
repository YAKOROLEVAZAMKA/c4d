#include <stdio.h>

void ft_shellshort(int v[])
{
    int gap, i, j, temp, c, d;
    
    for (d = 0; v[d] != 0; d++)
        ;
    for (gap = d/2; gap > 0; gap /= 2)
        for (i = gap; i < d; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;

                c = 0;
                while (v[c] != '\0')
                {
                    printf("%d ", v[c]);
                    c++;
                }
                puts("\n");
            }
}

int main(void)
{
    int i[10] = {5, 2, 623, 234, 64, 234, 2324, 123, 33};
    int c = 0;

    while (i[c] != '\0')
    {
        printf("%d ", i[c]);
        c++;
    }
    puts("\n");
    puts("\n");
    ft_shellshort(i);

    c = 0;
    while (i[c] != '\0')
    {
        printf("%d ", i[c]);
        c++;
    }

    return (0);
}