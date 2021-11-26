#include <iostream>
using namespace std;

int st[10];

void init (int k)
{
    st[k] = -1;
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

int solutie (int k)
{
    return 3 == k;
}

int valid (int k)
{
    if (k == 1 && st[k] == 0)
        return 0;
    for (int i = 1; i < k; i++)
        if (st[k] == st[i])
            return 0;
    if (k > 1)
        if (st[k]%2 == st[k-1]%2)
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= 3; i++)
        cout << st[i];
    cout << endl;
}

void back (int k)
{
    int as, ev;
    init (k);
    while (k > 0)
    {
        do
        {
            as = succesor (k);
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
    back(1);
    return 0;
}
