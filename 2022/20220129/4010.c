//TODO
#include <stdio.h>

struct mos
{
    int c, p;
} a[101];

int main ()
{
    int n, m, s = 0;
    scanf ("%d %d", &n, &m);
    for (int i = 1; i <= m; i++)
        scanf ("%d %d", &a[i].p, &a[i].c);
    for (int i = 1; i < m; i++)
        for (int j = i+1; j <= m; j++)
            if (a[i].p > a[j].p)
            {
                int tmp1 = a[i].p;
                a[i].p = a[j].p;
                a[j].p = tmp1;
            }
    for (int i = 1; i <= n; i++)
    {
        s += a[i].p*a[i].c;
//        printf ("%d, %d: %d\n", a[i].p, a[i].c, a[i].p*a[i].c);
        n -= a[i].c;
    }
    printf ("%d", s);
    return 0;
}
