#include <iostream>

using namespace std;

int main ()
{
    int v[101], n, ok = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        if (v[i]%v[n] != 0)
            ok = 0;
    if (ok) cout << "DA";
    else cout << "NU";
    return 0;
}
