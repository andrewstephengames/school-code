#include <fstream>
using namespace std;

ifstream in ("sirpie.in");
ofstream out ("sirpie.out");

int n, st[10], v[10];

void init (int k)
{
    st[k] = 0;
}

int prime (int a, int b)
{
    while (a != b)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a == 1;
}

void afisare ()
{
    for (int i = 1; i <= n; i++)
        out << v[st[i]] << " ";
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
    if (k >= 2)
        if (!prime(v[st[k-1]], v[st[k]]))
            return 0;
    return 1;
}

int solutie (int k)
{
    return n == k;
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
                init(k);
            }
        }
        else k--;
    }
}

int main ()
{
    int aux;
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    }
    back(1);
    return 0;
}
