//TODO
#include <stdio.h>
#include <limits.h>

int n, a[11], st[11], min = INT_MAX, minp;

void init (int k)
{
    st[k] = 0;
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
    if (a[st[k]] == min && a[st[k]] != a[minp])
        return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

int solutie (int k)
{
    return n == k;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[st[i]]);
    printf ("\n");
}

void back (int k)
{
    int as, ev;
    init (k);
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
    int tmp;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    /*
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    */
    for (int i = 1; i <= n; i++)
        if (a[i] < min)
        {
            min = a[i];
            minp = i;
        }
    back (1);
    return 0;
}
