#include <fstream>
using namespace std;

ifstream in ("permutari1.in");
ofstream out ("permutari1.out");

int n, st[10];

void afisare ()
{
    for (int i = 1; i <= n; i++)
        out << st[i] << " ";
    out << "\n";
}

void init (int k)
{
    st[k] = 0;
}

int solutie (int k)
{
    return n == k;
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
        if (st[i] == st[k])
            return 0;
    return 1;
}

void back (int k)
{
    int val, suc;
    while (k > 0)
    {
        do
        {
            suc = succesor (k);
            if (suc) val = valid(k);
        } while (suc && !val);
        if (suc)
            if (solutie(k)) afisare ();
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
    int n;
    in >> n;
    in.close();
    back(1);
    out.close();
    return 0;
}
