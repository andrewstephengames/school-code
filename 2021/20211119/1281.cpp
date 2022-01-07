#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int st[10], n;

void init (int k)
{
    st[k] = 0;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (st[i] == j)
                cout << "* ";
            else cout << "- ";
        }
    cout << "\n";
}

int valid (int k)
{
    for (int i = 1; i < k; i++)
    {
        if (st[i] == st[k] ||
            abs (st[k]-st[i]) ==
            abs (i-k))
            return 0;
    }
    return 1;
}

int succesor (int k)
{
    if (st[k] < n)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int solutie (int k)
{
    return n == k;
}

void back (int k)
{
    int as, ev;
    init(k);
    while (k > 0)
    {
        do
        {
            as = succesor(k);
            if (as) ev = valid(k);
        } while (as && !ev);
        if (as)
        {
            if (solutie(k))
                tipar();
            else
            {
                k++;
                init(k);
            }
        }
        else k--;
    }
}

int main ()
{
    cin >> n;
    back(1);
    cout << "\n" << (float)clock()/1000 << " ms\n";
    return 0;
}
