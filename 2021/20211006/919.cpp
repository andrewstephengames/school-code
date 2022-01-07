//displays 1 + the desired result
#include <iostream>

using namespace std;

int n, nr;

/*
void nr_cif_zero (int n, int &nr)
{
    int m = 0;
    if (n == 0) m++;
    while (n)
    {
        if (n%10 == 0)
            m++;
        n /= 10;
    }
    nr = m;
}
*/

void nr_cif_zero (int n, int &nr)
{
    if (n == 0) nr = 1;
    else
    {
        nr_cif_zero (n/10, nr);
        if (n%10 == 0) nr++;
    }
}

int main ()
{
    cin >> n;
    nr_cif_zero(n, nr);
    cout << nr;
    return 0;
}
