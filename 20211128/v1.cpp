#include <iostream>
using namespace std;
int st[10];

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < 4)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int solutie (int k)
{
    return k == 4;
}

int valid (int k)
{
    if (k == 1)
        if (st[k] == 1 && st[k+1] == 1)
            return 0;
    if (k > 1)
    {
        if (st[k] == 1 && st[k-1] == 1)
            return 0;
        if (st[k] == 1 && st[k+1] == 1)
            return 0;
    }
    return 1;
}

void tipar ()
{
    char c;
    for (int i = 1; i <= 4; i++)
    {
        c = st[i]+96;
        cout << c;
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
