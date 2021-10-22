#include <fstream>

ifstream in ("sirpie.in");
ofstream out ("sirpie.out");

using namespace std;

int n, st[10], v[10], a, b;

void init (int k)
{
    st[k] = 0;
}

void afisare ()
{
    for (int i = 1; i <= n; i++)
        cout << v[st[i]] << " ";
    cout << "\n";
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
    cin >> a >> b;
    n = b-a+1;
    for (int i = 1; i <= n; i++)
    {
        v[i] = a;
        a++;
    }
    back(1);
    return 0;
}
