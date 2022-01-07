#include <stdio.h>
#include <string.h>

FILE *in, *out;
int st[10], n;
char s[10];

void init (int k)
{
    st[k] = -1;
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
    if (k > 0)
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
    for (size_t i = 1; i <= n; i++)
        fprintf (stdout, "%c", s[st[i]]);
    fprintf (stdout, "\n");
/*
        fprintf (out, "%c", s[st[i]]);
    fprintf (out, "\n");
*/
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
    in = fopen ("anagrame1.in", "r");
    out = fopen ("anagrame1.out", "w");
    fscanf (stdin, "%s", s);
    n = strlen(s);
    back(1);
    return 0;
}
