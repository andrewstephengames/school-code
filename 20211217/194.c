#include <stdio.h>
#include <string.h>

FILE *in, *out;
int st[10], n;
char word[10];

int valid (int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        fprintf (out, "%c", word[st[i]-1]);
    fprintf (out, "\n");
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
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
    int tmp;
    in = fopen ("anagrame1.in", "r");
    out = fopen ("anagrame1.out", "w");
    fscanf (in, "%s", word);
    n = strlen(word);
    for (size_t i = 0; i < n-1; i++)
        for (size_t j = i+1; j < n; j++)
            if (word[i] > word[j])
            {
                tmp = word[i];
                word[i] = word[j];
                word[j] = tmp;
            }
    back (1);
    fclose(in);
    fclose(out);
    return 0;
}
