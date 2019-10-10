#include <stdio.h>

int main(void)
{
    struct robot
    {
        int alive;
        char name[5];
        int xpos;
        int ypos;
        int strngth;
    };

    printf("Siaze ov struct robot = %u\n", sizeof(struct robot));
    return (0);
}