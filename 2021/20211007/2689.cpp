#include <iostream>

using namespace std;

int n, a[1001];

void citire ()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

int palindrom ()
{
    int ok = 1;
    for (int i = 1; i <= n/2; i++)
        if (a[i] != a[n+1-i])
            ok = 0;
    return (ok == n);
}

int main ()
{
    citire ();
    for (int i = 1; i <= n; i++)
        cout << a[i];
    if (palindrom ()) cout << "\nDA";
    else cout << "\nNU";
    return 0;
}
