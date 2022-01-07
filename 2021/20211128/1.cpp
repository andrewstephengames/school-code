#include <fstream>
#include <iostream>
using namespace std;
ifstream out ("sir.out");

int st[10], m, x;

void init (int k)
{
    st[k] = 0;
}

int succesor (int k)
{
    if (st[k] < m)
    {
        st[k]++;
        return 1;
    }
}

int solutie (int k)
{
    return m == k;
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
    for (int i = 1; i <= m; i++)
    {
        int d = 1;
        while (d*d < x)
        {
            if (x%d == 0)
                out << d << " " << x/d;
            d++;
        }
        if (d*d == x)
            out << d << " ";
        out << "\n";
    } 
}

void back (int k)
{
    int as, ev, ok = 0;
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
            {
                tipar();
                ok = 1;
            }
            else
            {
                k++;
                init(k);
            }
        else k--;
    }
    if (!ok) out << "Imposibil";
}

int main ()
{
    cin >> m >> x;
    back(1);
    return 0;
}
