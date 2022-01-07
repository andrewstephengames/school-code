#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n, d, prim;
    cin >> n;
    if (n < 2)
        prim = 0;
    else prim = 1;
    for (d = 2; d <= sqrt(n); d++)
        if (n%d == 0)
            prim = 0;
    if (prim) cout << "Prim\n";
    else cout << "Nu\n";
    return 0;
}
