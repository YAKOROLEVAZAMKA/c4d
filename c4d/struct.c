#include <stdio.h>

int main(void)
{
    struct lalka
    {
        char lal[40];
        int lul;
    };

    struct lalka spudi =
    {
    "Spoodi-moon",
    1
    };

    struct lalka bitman =
    {
    "Z-trall-iN",
    0
    };

    printf("%s = %d\n", spudi.lal, spudi.lul);
    printf("%s = %d\n", bitman.lal, bitman.lul);

    return (0);
}