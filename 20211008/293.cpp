//293
#include <iostream>

using namespace std;


int cifdis (int n)
{
    int f[10], ok = 1;
    for (int i = 0; i < 10; i++)
        f[i] = 0;
    while (n)
    {
        f[n%10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (f[i] > 1)
             ok = 0;
    return ok;
}

int main ()
{
    int a[101], n, ok = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        if (!cifdis(a[i]))
            ok = 0;
    if (ok) cout << "DA";
    else cout << "NU";
    return 0;
}
