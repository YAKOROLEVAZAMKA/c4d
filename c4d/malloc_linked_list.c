#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    struct stock {
        char symbol[5];
        int qntt;
        float price;
        struct stock *next;
    };

    struct stock *first;
    struct stock *current;
    struct stock *new;

    first = (struct stock *)malloc(sizeof(struct stock));

    if (first == NULL)
        exit (1);

    current = first;
    strcpy(current->symbol, "GOOG");
    current->qntt=100;
    current->price=801.19;
    current->next=NULL;

    new = (struct stock *)malloc(sizeof(struct stock));

    if (new == NULL)
        exit (1);
    
    current->next=new;
    current=new;

    strcpy(current->symbol, "MSFT");
    current->qntt=100;
    current->price=28.77;
    current->next=NULL;

    current=first;

    puts ("Here we GO");
    printf("Name\tQuant-t\tPrice\tSum\n");

    printf("%-6s\t%5d\t%.2f\t%.2f\n",
        current->symbol,
        current->qntt,
        current->price,
        current->qntt*current->price);

    current=current->next;

    printf("%-6s\t%5d\t%.2f\t%.2f\n",
        current->symbol,
        current->qntt,
        current->price,
        current->qntt*current->price);

    return (0);
}