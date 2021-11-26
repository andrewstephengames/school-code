#include <iostream>
using namespace std;

int st[10], n;

void init (int k)
{
    st[k] = 0;
}

int solutie (int k)
{
    return k == n;
}

int succesor (int k)
{
    if (st[k] < 9)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    int nr = 0;
    for (int i = 1; i <= n; i++)
    {
        nr = nr*10+st[i];
    }
    if (nr%10 == 6) cout << nr << " ";
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
                tipar();
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
