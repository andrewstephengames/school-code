#include <iostream>

using namespace std;

int main ()
{
    int n, a[1001], b[1001], ok = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n && ok; i++)
    {
        ok = 0;
        for (int j = 1; j <= n && !ok; j++)
            if (a[i] == b[j])
            {
                ok = 1;
                b[j] = -1;
            }
        /*
        ok = 1;
        for (int j = 1; j <= n; j++)
            if (b[j] != -1) ok = 0;
        */
    }
    if (ok) cout << "DA";
    else cout << "NU";
    return 0;
}
