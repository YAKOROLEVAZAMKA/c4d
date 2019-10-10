#include <stdio.h>
#include <time.h>

static int am;

static char *weekday(int a)
{
    char *wday[] = {"poned", "vtor", "sred", "4etv", "pyat", "sub", "voskr"};
    while (a > 0)
    {
        a = a - 7;
    }

    a = a + 7;

    switch(a)
    {
        case 1:
        return (wday[1]);
        break;
        case 2:
        return (wday[2]);
        break;
        case 3:
        return (wday[3]);
        break;
        case 4:
        return (wday[4]);
        break;
        case 5:
        return (wday[5]);
        break;
        case 6:
        return (wday[6]);
        break;
        case 0:
        return (wday[0]);
        break;
        default:
        break;
    }
}

int hours(int a)
{
    int t;

    if (a <= 12)
    {
        t = a;
        am = 1;
    }
    else
    {
        t = a - 12;
        am = 2;
    }

    return (t);
}

const char *ret_am_pm (int a)
{
    

    if (am == 1)
        return "am";
    else   
        return "pm";

}

int main(void)
{
    time_t tictoc;
    struct tm *today;

    tictoc = time(NULL);
    today = localtime(&tictoc);
    /*printf("Today %d.%02d.%d\n",
            today->tm_mday,
            today->tm_mon+1,
            today->tm_year+1900);*/

    printf("Today %02d%s .%02d.%02d,   %s\n",
            hours(today->tm_hour),
            ret_am_pm(am),
            today->tm_min,
            today->tm_sec,
            weekday(today->tm_mday));
        
    return (0);
}