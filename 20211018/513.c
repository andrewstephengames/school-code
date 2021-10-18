#include <stdio.h>

int main ()
{
    int n, k, a[1001], aux, cnt = 0;
    scanf ("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    for (int i = 1; i < n && cnt <= k; i++)
    {
        cnt++;
        if (i == cnt || i%k == 1)
        {
            for (int j = i+1; j < n; j++)
                if (a[i] > a[j])
                {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
        }
    }
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[i]);
    return 0;
}
