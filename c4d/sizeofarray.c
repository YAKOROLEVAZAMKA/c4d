#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[] = "azzazaazazaza lalka.";
    int arr[] = {1, 3, 5, 6, 8};

    int i;
    for (i = 0; string[i]; i++)
        ;
    printf("String \"%s\" = %u\t %d\t%d\n", string, sizeof(string), strlen(string), i);
    printf("%u\n", sizeof(arr));
    return (0);
}