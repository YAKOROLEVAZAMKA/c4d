#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ITEMS 5

struct stock {
    char symbol[5];
    int qntt;
    float price;
    struct stock *next;
};

struct stock *first;
struct stock *current;
struct stock *new;

struct stock *make_structure(void);
void fill_structure(struct stock *a, int c);
void show_structure(struct stock *a);

int main(void)
{
    int x;

    for (x=0; x<ITEMS; x++)
    {
        if (x == 0)
        {
            first = make_structure();
            current = first;
        }
        else
        {
            new = make_structure();
            current->next=new;
            current=new;
        }
        fill_structure(current, x+1);
    }
    current->next=NULL;

    puts("Here we GO:");
    printf("Name\tQntt\tPrice\tSum\n");
    current = first;
    while (current)
    {
        show_structure(current);
        current=current->next;
    }

    return (0);
}

struct stock *make_structure(void)
{
    struct stock *a;

    a = (struct stock *)malloc(sizeof(struct stock));

    if (a == NULL)
        exit (1);

    return (a); 
}

void fill_structure(struct stock *a, int c)
{
    printf("Element #%d/%d:\n", c, ITEMS);
    printf("Name. ");
    scanf("%s", a->symbol);
    printf("Quantity. ");
    scanf("%d", &a->qntt);
    printf("Price. ");
    scanf("%f", &a->price);
}

void show_structure(struct stock *a)
{
    printf("%-6s\t%5d\t%.2f\t%.2f\n",
            a->symbol,
            a->qntt,
            a->price,
            a->qntt*a->price);
}