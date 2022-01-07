#include <iostream>
using namespace std;

int m, a[1001], b[1001], c[1001];

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 0) return 1;
    else if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d++)
        if (n%d == 0) return 0;
    return 1;
}

int main ()
{
    int aux, ord, n, v[1001];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (prim(v[i]))
        {
            m++;
            a[m] = v[i];
        }
    }
    for (int i = 1; i <= m; i++)
        b[i] = 0;
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[j] < a[i])
                b[i]++;
            else b[j]++;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        c[b[i]+1] = a[i];
    }
    for (int i = 1; i <= m; i++)
        cout << c[i] << " ";
    return 0;
}
