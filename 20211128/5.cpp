#include <fstream>
using namespace std;
ofstream out ("prime.out");

int st[10], n, m;

void init (int k)
{
    st[k] = 10;
}

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d++)
        if (n%d == 0) return 0;
    return 1;
}

int succesor (int k)
{
    if (st[k] < m)
        st[k] += 2;
}
