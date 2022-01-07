#include <string.h>
#include <iostream>
#include <time.h>
using namespace std;

size_t n, st[10];
char s[5];

void init (size_t k)
{
    st[k] = 0;
}

void tipar ()
{
    int k = 0;
    for (size_t i = 1; i <= n; i++)
        cout << s[st[i]-1] << " ";
    cout << "\n";
}

int valid (size_t k)
{
    for (size_t i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

size_t succesor (size_t k)
{
    if (st[k] < n)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

size_t solutie (size_t k)
{
    return n == k;
}

void back (size_t k)
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
    int aux;
    cin >> s;
    n = strlen(s);
    for (size_t i = 0; i < n-1; i++)
        for (size_t j = i+1; j < n; j++)
            if (s[i] > s[j])
            {
                aux = s[i];
                s[i] = s[j];
                s[j] = aux;
            }
    back(1);
    cout << "\n" << (float)clock()/1000 << " ms\n";
    return 0;
}

