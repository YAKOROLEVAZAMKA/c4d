#include <stdio.h>
#include <conio.h>

int main()
{
    printf("press\n");
    while(!kbhit());
    printf("\n (%c)\n", getch());
}