//TODO
#include <stdio.h>

int main ()
{
    int n, a, b, v[1000001];
    scanf ("%d %d %d", &n, &a, &b);
    int k = 0;
    while (n > 0)
    {
        if (n%a != 0)
            n -= b;
        else n -= a;
        v[k] = a;
        v[k+1] = b;
    }
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if (a < b)
                if (v[i] > v[j])
                {
                    int tmp = v[i];
                    v[i] = v[j];
                    v[j] = tmp;
                }
            else
                if (v[i] < v[j])
                {
                    int tmp = v[i];
                    v[i] = v[j];
                    v[j] = tmp;
                }
        }
    for (int i = 0; i < n; i++)
        printf ("%d ", v[i]);
    return 0;
}
