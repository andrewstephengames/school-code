#include <iostream>
#include <cmath>
using namespace std;

int cmmdc (int a, int b)
{
    while (a != b)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int fastcmmdc (int a, int b)
{
    int r;
    do
    {
        r = a%b;
        a = b;
        b = r;
    } while (r);
    return a;
}

int nrcif (int n)
{
    int nr = 0;
    while (n)
    {
        nr++;
        n /= 10;
    }
    return nr;
}

int main ()
{
    int n, a, b, nr;
    cin >> n;
    nr = nrcif(n);
    if (nr%2 == 0)
    {
        a = n/(int)pow(10, nr/2);
        b = n%(int)pow(10, nr/2);
    }
    else
    {
        a = n/(int)(pow(10, nr/2)*10);
        b = n%(int)pow(10, nr/2);
    }
    if (b != 0)
        cout << fastcmmdc (a, b);
    else cout << a;
    return 0;
}
