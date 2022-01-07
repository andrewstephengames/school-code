#include <fstream>
using namespace std;
ifstream in ("permutari.in");
ofstream out ("permutari.out");

int n, st[10], m;

void init (int k)
{
    st[k] = 0;
}

void afisare ()
{
    for (int i = 1; i <= m; i++)
        out << st[i] << " ";
    out << "\n";
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
        if (st[k] == st[i])
            return 0;
    return 1;
}

int solutie (int k)
{
    return m == k;
}

void back (int k)
{
    int suc, val;
    init(k);
    while (k > 0)
    {
        do
        {
            suc = succesor (k);
            if (suc) val = valid(k);
        } while (suc && !val);
        if (suc)
        {
            if (solutie(k))
                afisare ();
            else
            {
                k++;
                valid(k);
            }
        }
        else k--;
    }
}

int main ()
{
    in >> n >> m;
    back(1);
    return 0;
}
