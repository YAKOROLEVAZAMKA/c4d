#include <stdio.h>

void discount (float *a)
{
    *a = *a * 2.3;
}

int main (void)
{
    float price;
    float *ptr;
  
    scanf("%f", &price);

    ptr = &price;

    discount(ptr);
    printf("price - %.2f", price);

    return (0);
}