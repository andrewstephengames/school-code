#include <iostream>
using namespace std;

int st[10], s = 0, n;

int prim (int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    else if (n%2 == 0) return 0;
    for (int d = 3; d*d <= n; d++)
        if (n%2 == 0)
            return 0;
    return 1;
}

void init (int k)
{
    st[k] = 0;
}

int solutie (int k)
{
    return s == n;
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

int valid (int k)
{
    for (int i = 1; i < k; i++)
    {
        s += st[i];
        /*
        if (st[i] > st[k])
            return 0;
        */
        if (st[i] == st[k])
            return 0;
    }
    return 1;
}

void tipar (int k)
{
    for (int i = 1; i <= k; i++)
    {
        cout << st[i];
        if (i != k)
            cout << '+';
    }
    cout << endl;
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
            if (solutie(k))
                tipar(k);
            else
            {
                k++;
                init(k);
            }
        else k--;
    }
}

int main ()
{
    cin >> n;
    back(1);
    return 0;
}
