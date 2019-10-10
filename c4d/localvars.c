#include <stdio.h>

int age;
float feet;

void half(void)
{
    float a, h;
    a = (float)age/2.0;
    printf("%.1f\n", a);
    h = feet/2.0;
    printf("%.1f\n", h);
}

void twice(void)
{
    age *= 2;
    printf("age twice %d\n", age);
    feet *= 2;
    printf("feet twice %d\n", age);
}

int main(void)
{
    scanf("%d", &age);
    scanf("%f", &feet);
    
    printf("%d, %.1f \n", age, feet);
    half();
    twice();
    printf("%d, %.1f \n", age, feet);
    return (0);
}