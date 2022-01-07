//TODO: not in alphabetical order
#include <stdio.h>
#include <string.h>

int st[12];
char word[12];

int valid (int k)
{
    if (!strchr ("aeiou", word[st[k]-1]))
        if (word[st[k]-1] != word[k-1])
            return 0;
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void tipar ()
{
    for (int i = 1; i <= strlen(word); i++)
        printf ("%c", word[st[i]-1]);
    printf ("\n");
}

void back (int k)
{
    for (int i = 1; i <= strlen(word); i++)
    {
        st[k] = i;
        if (valid (k))
            if (strlen(word) == k)
                tipar();
        else back (k+1);
    }
}

int main ()
{
    scanf ("%s", word);
    back (1);
    return 0;
}
