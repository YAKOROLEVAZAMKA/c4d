#include <unistd.h>
#include <stdio.h>

int binsearch(int x, int v[], int n);

/* binsearch: найти x в v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n-1;
    while (low <=high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid+1;
        else /* совпадение найдено */
            return mid;
        }
        return (-1); /* совпадения нет */
}

int main(int argc, char **argv)
{
   /* if (argc == 1)
    {
        printf("NO ARGUMENTS");
        return (0);
    } */

    int n, x;

    int v[10] = { 1, 2, 5, 6, 11, 22, 50, 55, 80, 90};
    n = 10;
    
    printf("Which number to find\n");
    scanf ("%d", &x);
    //printf("%s", argv[1]);
    printf("%d\n", v[binsearch(x, v, n)]);
    return (0);
}