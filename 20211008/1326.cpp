//TODO: wrong answer for second example
#include <iostream>
#include <climits>

using namespace std;

int main ()
{
    int v[1001], n, min = INT_MAX, p, ok = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] < min)
        {
            min = v[i];
            p = i;
        }
    }
    if (p != 1 && p != n)
    {
        for (int i = 1; i < p && ok; i++)
            if (v[i] <= v[i+1])
                ok = 0;
        for (int i = p; i < n && ok; i++)
            if (v[i] >= v[i+1])
                ok = 0;
        if (ok) cout << "DA";
        else cout << "NU";
    }
    else cout << "NU";
    return 0;
}
