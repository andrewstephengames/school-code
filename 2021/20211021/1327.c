//TODO: doesnt print any pie values, prints all 24 values otherwise
#include <stdio.h>

FILE *in, *out;
int n, a[10], st[10];

int pie (int a, int b)
{
    while (a != b)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a == 1;
}

int checkpie ()
{
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            if (!pie(a[i], a[i+1]))
                return 0;
        }
        else
        {
            if (!pie(a[i], a[i+1]) || !pie (a[i], a[i+1]))
                return 0;
        }
    }
    return 1;
}

void citire ()
{
    fscanf (in, "%d", &n);
    for (int i = 1; i <= n; i++)
        fscanf (in, "%d", &a[i]);
}

void afisare ()
{
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            if (!pie(a[i], a[i+1]))
                goto next;
        }
        else
        {
            if (!pie(a[i], a[i+1]) || !pie (a[i], a[i+1]))
                goto next;
        }
    }
    for (int i = 1; i <= n; i++)
        fprintf (out, "%d ", a[st[i]]);
    fprintf (out, "\n");
    next: ;
}

void cafisare ()
{
    for (int i = 1; i <= n; i++)
        printf ("%d ", a[st[i]]);
    printf ("\n");
}

void ccitire ()
{
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
}

void init (int k)
{
    st[k] = 0;
}

int solutie (int k)
{
    return n == k;
}

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (st[k] == st[i])
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

void back (int k)
{
    int suc, val;
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
            {
//                if (checkpie())
                    afisare();
            }
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
    in = fopen ("sirpie.in", "r");
    out = fopen ("sirpie.out", "w");
    citire();
    back (1);
    fclose (in);
    fclose (out);
    return 0;
}
