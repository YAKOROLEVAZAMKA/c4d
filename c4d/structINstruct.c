#include <stdio.h>
#include <string.h>

int main(void)
{
    struct id
    {
        char first[40];
        char last[40];
    };
    struct date 
    {
        int month, day, year;
    };
    struct human
    {
        struct id name;
        struct date birthday;
    };
    struct human president;

    strcpy(president.name.first, "George");
    strcpy(president.name.last, "Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s %s was born on %02d.%02d.%04d\n", president.name.first, president.name.last,
        president.birthday.day,
        president.birthday.month,
        president.birthday.year);

    return (0);
}