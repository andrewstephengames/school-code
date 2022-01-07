#include <iostream>
#include <time.h>
using namespace std;
int st[10], n;

void init (int k)
{
    st[k] = 0;
}

int maxim (int k)
{
    int m = 0;
    for (int i = 1; i <= k; i++)
        if (st[i] > m)
            m = st[i];
    return m;
}

int solutie (int k)
{
    return n == k;
}

int valid (int k)
{
    return 1;
}

int succesor (int k)
{
    if (k > 1)
    if (st[k] <= maxim(st[k-1]))
    {
        st[k]++;
        return 1;
    }
    return 0;
}

void tipar ()
{
    int m = 1;
    m = maxim(n);
    for (int i = 1; i <= m; i++)
    {
        cout << '{';
        for (int j = 1; j <= n; j++)
            if (st[j] == i)
                cout << j << ' ';
        cout << '}';
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
    cout << "\n" << clock();
    return 0;
}
