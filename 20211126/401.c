//FIXME: doesnt generate numbers containing 0
#include <stdio.h>
#include <time.h>

int st[10];

void init (int k)
{
    st[k] = -1;
}

int succesor (int k)
{
    if (st[k] < 8)
    {
        if (st[k] == 0)
        {
            st[k] += 2;
            return 1;
        }
        st[k]+=3;
        return 1;
    }
    return 0;
}

int valid (int k)
{
    if (st[k] == 5)
        return 0;
    return 1;
}

int solutie (int k)
{
    return k == 2;
}

void tipar ()
{
    for (int i = 1; i <= 2; i++)
        printf ("%d", st[i]);
    printf ("\n");
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
