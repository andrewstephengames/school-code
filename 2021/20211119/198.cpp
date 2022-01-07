#include <fstream>
using namespace std;
ifstream in ("submultimi.in");
ofstream out ("submultimi.out");

int st[10], n;

void init (int k)
{
    st[k] = 0;
}

void tipar (int k)
{
    for (int i = 1; i <= k; i++)
        out << st[i] << " ";
    out << "\n";
}

int valid (int k)
{
    if (k > 1)
        if (st[k] <= st[k-1])
            return 0;
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
    return k <= n;
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
            {
                tipar(k);
                k++;
                init(k);
            }
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
    in >> n;
    back(1);
    out << "\n" << (float)clock()/1000 << " ms\n";
    return 0;
}
