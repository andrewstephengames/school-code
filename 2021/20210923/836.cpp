#include <iostream>

using namespace std;

int afisvec (int v[], int n)
{
    int i;
    if (i == n) cout << v[i] << " "; return 0;
    return afisvec(v, i+1);
}

int main ()
{
    int v[201], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    afisvec (v, n);
    return 0;
}
