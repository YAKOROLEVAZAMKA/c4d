#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    typedef struct stock {
        char symbol[5];
        int quantity;
        float price;
    } stck;

    stck *invest;

    invest = (stck *)malloc(sizeof(stck));

    if (invest == NULL)
        exit (1);
    
    strcpy(invest->symbol, "GOOG");
    invest -> quantity = 100;
    invest -> price = 801.19;

    puts("Here we go");
    printf("Name\tQuantity\tPrice\tSum\n");
    printf("%-6s\t%5d\t%.2f\t%.2f\n", 
        invest->symbol, 
        invest->quantity, 
        invest->price, 
        invest->quantity*invest->price);

    return (0);
}