#include <stdio.h>

int main(void)
{
    char lead;
    char *p;

    lead = 'A';
    p = &lead;

    printf("Var 'lead':\n");
    printf("Size\t\t%ld\n", sizeof(lead));
    printf("Contains\t%c\n", lead);
    printf("Address\t\t%p\n", &lead);
    printf("Var 'p':\n");
    printf("Contains\t%p\n", p);
    printf("Contains\t%c\n", *p);
    return (0);
}