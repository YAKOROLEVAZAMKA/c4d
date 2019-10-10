#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t tictoc;

    int i = 0;

    //time(&tictoc);
    //tictoc = time(NULL);
    //printf("Current time = %ld\n", tictoc);

    for(i = 0; i <=50; i++)
    {
        tictoc = time(NULL);
        printf("Current time = %ld\n", tictoc);
    }

    return (0);
}