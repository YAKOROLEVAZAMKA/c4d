#include <unistd.h>
#include <stdio.h>

int binsearch(int x, int v[], int n);

int binsearch(int x, int v[], int n)
{
    int i;

    i = 0;

    while (i < n)
    {
        if (x == v[i])
            return (i);
        else
            i++;
    }
    return (-1);
}

   
    /*while (low <=high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid+1;
        else 
            return mid;
        }
        return (-1); */
   


int main(void)
{
    int n, x;

    int v[10] = { 1, 2, 5, 6, 11, 22, 50, 55, 80, 90};
    n = 10;
    
    printf("Which number to find\n");
    scanf ("%d", &x);
    printf("%d\n", v[binsearch(x, v, n)]);
    return (0);
}