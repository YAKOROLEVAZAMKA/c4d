#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t tm;

    tm = time(NULL);
    printf("Current time = %s", ctime(&tm));

    return (0);
}