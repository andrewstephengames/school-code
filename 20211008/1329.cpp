#include <iostream>

using namespace std;

int main ()
{
    int n, v[1001], ok = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i < n-1; i++)
    {
        if (v[i] <= v[i+1] &&
            v[i+1] <= v[i+2])
            ok = 0;
        if (v[i] >= v[i+1] &&
            v[i+1] >= v[i+2])
            ok = 0;
    }
    if (ok) cout << "DA";
    else cout << "NU";
    return 0;
}
