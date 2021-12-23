#include <iostream>
#include <fstream>
using namespace std;
ifstream in ("bac.in");

int main ()
{
    int n, a[100000], k = 0, f[100000], ok = 1;
    while (in >> n)
    {
        a[k] = n;
        k++;
    }
    for (int i = 0; i <= k; i++)
        if (a[i] == a[i+1] || a[i] == a[k-i])
            f[a[i]]++;
    if (k%2 == 1)
    {
        ok = 1;
        for (int i = 0; i < k; i++)
            if (f[a[i]]%2 == 1)
                ok++;
    }
    if (k%2 == 0)
        for (int i = 0; i < k; i++)
        {
            if (f[a[i]]%2 == 0)
                continue;
            if (f[a[i]] == 1)
                ok++;
        }
    if (ok > 1)
        cout << "NU";
    if (ok == 0)
        cout << "DA";
    return 0;
}
