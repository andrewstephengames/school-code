#include <iostream>
using namespace std;

int st[10];

void init (int k)
{
    st[k] = -1;
}

int solutie (int k)
{
    return 5 == k;
} 

int succesor (int k)
{
    if (st[k] < 1)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    if (k > 2 && st[k] == 0 && st[k-1] == 0 && st[k-2] == 0)
        return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= 5; i++)
        cout << st[i];
    cout << "\n";
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
            if (as) ev = valid (k);
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
    back(1);
    return 0;
}
