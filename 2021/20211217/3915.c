#include <stdio.h>
#include <string.h>

int st[12], n, ok;
char word[12];

int valid (int k)
{
    if (k > 1)
    {
        if (strchr ("aeiou", word[st[k]-1]) &&
            strchr ("aeiou", word[st[k-1]-1]))
            return 0;
        if (!strchr ("aeiou", word[st[k]-1]) &&
            !strchr ("aeiou", word[st[k-1]-1]))
            return 0;
    }
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= n; i++)
        printf ("%c", word[st[i]-1]);
    printf ("\n");
}

void back (int k)
{
    for (int i = 1; i <= n; i++)
    {
        st[k] = i;
        if (valid (k))
            if (k == n)
            {
                ok = 1;
                tipar();
            }
        else back (k+1);    
    }
}

int main ()
{
    scanf ("%s", word);
    n = strlen(word);
    back (1);
    if (!ok)
        printf ("IMPOSIBIL");
    return 0;
}
