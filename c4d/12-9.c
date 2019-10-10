#include <stdio.h>

int main(void)
{
    char firstname[16];

    //fgets(firstname, 16, stdin);
    scanf("%15s", firstname);
    printf("123, %s\n", firstname);
    return (0);
}