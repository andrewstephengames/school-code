#include <iostream>
#include <time.h>
using namespace std;

int st[10], n = 7;

void init (int k)
{
    st[k] = 1;
}

void tipar ()
{
    for (int i = 1; i <= 5; i++)
        cout << st[i];
    cout << "\n";
}

int valid (int k)
{
    return 1;
}

int succesor (int k)
{
    if (st[k] < n)
    {
        st[k]+=2;
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
    //cin >> n;
    back(1);
    cout << "\n" << (float)clock()/1000 << " ms\n";
    return 0;
}

