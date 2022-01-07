#include <iostream>

using namespace std;

int main ()
{
    int n, v[1001], x, y, nr = 0, ok = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    if (v[1] < v[n])
    {
        x = v[1];
        y = v[n];
    }
    else 
    {
        x = v[n];
        y = v[1];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] < x || v[i] > y)
        {
            ok = 0;
            break;
        }
    }
    if (ok) cout << "DA";
    else cout << "NU";
    return 0;
}
