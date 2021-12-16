#include <stdio.h>
#include <string.h>

FILE *in, *out;
int st[10];
size_t n;
char s[10];

int valid (int k)
{
    if (k > 1)
        if (s[st[k]-1] > s[st[k]])
        return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    for (size_t i = 1; i <= n; i++)
        fprintf (out, "%c", s[st[i]-1]);
    fprintf (out, "\n");
}

void back (int k)
{
    for (int i = 0; i < n; i++)
    {
        st[k] = i;
        if (valid (k))
            if (n == k)
                tipar();
        else back (k+1);
    }
}

int main ()
{
    in = fopen ("anagrame1.in", "r");
    out = fopen ("anagrame1.out", "w");
    fscanf (in, "%s", &s);
    n = strlen (s);
    back (1);
    fclose (in);
    fclose (out);
    return 0;
}
