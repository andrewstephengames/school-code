#include <iostream>

using namespace std;

int suma (int v[], int n)
{
    if (n == 0) return 0;
    return suma (v, n-1)+v[n-1];
}

int main ()
{
    int v[101], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << suma (v, n);
    return 0;
}
