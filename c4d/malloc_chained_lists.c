#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct typical {
    int value;
    struct typical *next;
};

struct typical *first;
struct typical *current;
struct typical *new;

int menu(void);
void add(void);
void show(void);
void delete(void);
struct typical *create(void);

int main(void)
{
    int choice ='\0';
    first = NULL;

    while (choice != 'Q')
    {
        choice = menu();
        switch (choice)
        {
                case 'S':
                    show();
                    break;
                case 'A':
                    add();
                    break;
                case 'R':
                    delete();
                    break;
                case 'Q':
                    break;
                default:
                    break;
        }
    }

    return (0);
}

int menu(void)
{
    int ch;

    printf("S - show, A - add, R - remove, Q - quit \n");
    ch = getchar();
    while (getchar() != '\n')
        ;
    return(toupper(ch));
}

void add(void)
{
    if (first == NULL)
    {
        first = create();
        current = first;
    }
    else
    {
        current = first;
        while (current->next)
            current=current->next;
        new = create();
        current->next=new;
        current=new;
    }
    printf("Enter int: ");
    scanf("%d", &current->value);
    current->next=NULL;
    while(getchar() != '\n')
        ;
}

void show(void)
{
    int count = 1;

    if (first == NULL)
    {
        puts("Nothing to show ffs");
        return;
    }
    puts("All entries:");
    current=first;

    while(current)
    {
        printf("Entry %d: %d\n", count, current->value);
        current=current->next;
        count++;
    }
}

void delete(void)
{
    struct typical *previous;
    int r, c;

    if (first == NULL)
    {
        puts("Nothing to delete");
        return;
    }
    puts ("Select entry to remove:");
    show();
    printf("Entry: ");
    scanf("%d", &r);
    while(getchar() != '\n')
        ;

    c = 1;

    current = first;
    previous = NULL;
    while (c != r)
    {
        previous = current;
        current = current->next;
        c++;

        if (current == NULL)
        {
            puts("Entry not found");
            return;
        }
    }
    if (previous == NULL)
        first = current->next;
    else
        previous->next=current->next;
    printf("Entry %d has been removed.\n", r);
    free(current);
}

struct typical *create(void)
{
    struct typical *a;

    a = (struct typical *)malloc(sizeof(struct typical));
    if (a == NULL)
        exit (1);
    return (a);
}
