//TODO
//pbinfo
#include <stdio.h>
#include <string.h>

FILE *in, *out;
int st[10], n;
char str[10];

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
    if (k > 1)
        if (st[k] < st[k-1])
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
        fprintf (stdout, "%c", str[st[i]-1]);
    fprintf (stdout, "\n");
}

void back (int k)
{
    int as, ev;
    init (k);
    while (k > 0)
    {
        do
        {
            as = succesor (k);
            if (as) ev = valid (k);
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
    in = fopen ("permrep.in", "r");
    out = fopen ("permrep.out", "w");
    fscanf (in, "%s", str);
    n = strlen(str);
    back (1);
    fclose (in);
    fclose (out);
    return 0;
}
