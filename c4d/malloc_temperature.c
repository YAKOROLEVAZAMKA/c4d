#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float cels2kel(float *f)
{
    static float flo;
    //printf("%.2f\n", *f);
    flo = *f + 273.15;

    return (flo);
}

float fahr2kel(float *f)
{
    static float flo;
    flo = (*f + 459.67) * (5.0 / 9.0);

    return (flo);
}


int main(void)
{
    float *f;
    char answer[64];

    f = (float *)malloc(sizeof(float)*1);
    if (f == NULL)
        exit(1);


    puts("Enter ");
    scanf("%f", f);
    //printf("%.2f", *f);
    puts("Cels or Fahr?");
    fflush(stdin);
    fgets(answer, 62, stdin);
    //scanf("%c", answer);
    //tolower(answer[0]);
    if (answer[0] >= 'A' && answer[0] <= 'Z')
        answer[0] = answer[0] | 32;
    //printf("%c", answer);

    if (answer[0] == 'c')
        printf("%.2f Cels = %.2f Kelv", *f, cels2kel(f));
    
    if (answer[0] == 'f')
        printf("%.2f Fahr = %.2f Kelv", *f, fahr2kel(f));
    
    return (0);
}