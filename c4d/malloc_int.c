#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float *age;

    age = (float *)malloc(sizeof(float)*1);
    if (age == NULL)
    {
        puts ("GOODBYE");
        exit (1);
    }
    scanf("%f", age);
    printf("azaza - %.2f\n", *age);
    return (0);
}