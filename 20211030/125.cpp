#include <fstream>
using namespace std;
ifstream in ("permutari2.in");
ofstream out ("permutari2.out");

int n, st[10], a[10];

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
        if (st[k] == st[i])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        out << a[st[i]] << " ";
    out << "\n";
}

void back (int k)
{
    int as, ev;
    while (k > 0)
    {
        do
        {
            as = succesor (k);
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
    int aux;
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> a[i];
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
    }
    back(1);
    return 0;
}
