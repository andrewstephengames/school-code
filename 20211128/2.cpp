#include <fstream>
using namespace std;
ofstream out ("morse.out");

int st[10], n = 5;

void init (int k)
{
    st[k] = -1;
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

int solutie (int k)
{
    return n == k;
}

int valid (int k)
{
    if (k == 1)
        if (st[k] == 0)
            return 0;
    if (k == n)
        if (st[k] == 0)
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
    {
        if (st[i] == 0)
            out << '-';
        if (st[i] == 1)
            out << '.';
    }
    out << endl;
}

void back (int k)
{
    int as, ev;
//    init (k);
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
