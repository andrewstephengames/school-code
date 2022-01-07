#include <iostream>
#include <fstream>

using namespace std;

ifstream in ("paritar.in");
ofstream out ("paritar.out");

int ok;

int main ()
{
    int n, a[500002];
    in >> n;
    for (int i = 0; i < 2*n; i++)
        in >> a[i];
    for (int i = 0; i < n; i++)
        for (int j = n; j < n*2; j++)
        {
            if (a[i]%2 == 0 && a[j]%2 == 0)
            {
                ok++;
                break;
            }
            if (a[i]%2 == 1 && a[j]%2 == 1)
            {
                ok++;
                break;
            }
        }
    if (ok == n) out << "DA";
    else out << "NU";
    return 0;
}
