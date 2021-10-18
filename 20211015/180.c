#include <stdio.h>

int max = -1, min = 1000001, maxi, mini;

int main ()
{
    int n, a[1001];
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
            maxi = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            mini = i;
        }
    }
    for (int i = 0; i < maxi && i < mini; i++)
    return 0;
}
