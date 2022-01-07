#include <iostream>
#include <time.h>
using namespace std;

int st[10], n, b[10];

void init (int k)
{
    st[k] = 0;
}

int tipar (int k)
{

    for (int i = 1; i <= k; i++)
        b[i] = st[i];
    for (int i = k; i >= 1; i--)
        coutc << b[i] << " ";
  cout<< "\n";
}

int valid (int k)
{
    int s = 0;
    for (int i = 1; i <= k; i++)
    {
        s+=st[i];
    }
    if (s>n)
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
   int s = 0;
   for (int i=1; i<=k;i++)
        s+=st[i];
   return s==n;
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
                tipar(k);
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
    cin >> n;
    back(1);
    cout << "\n" << (float)clock()/1000 << " ms\n";
    return 0;
}

