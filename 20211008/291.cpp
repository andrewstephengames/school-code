#include <iostream>
using namespace std;

int par (int x)
{
    int nr = 0;
    while (x)
    {
        nr++;
        x /= 10;
    }
    return (nr%2 == 0);
}

int main ()
{
    int n, v[101], ok = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (!par(v[i])) ok = 0;
    }
    if (ok) cout << "DA";
    else cout << "NU";
    return 0;
}
