#include <stdio.h>
#include <string.h>

char word[101], wordcp[101];

int litImp (char word[])
{
    return (strlen(word)%2);
}

int main ()
{
    size_t n, mid;
    fgets (word, 101, stdin);
    char *p;
    p = strtok (word, " ");
    while (p)
    {
        n = strlen(p);
        mid = n/2;
        if (litImp (p))
        {
            for (size_t i = n/2; i < n; i++)
                p[i] = p[i-1];
            n--;
        }
        printf ("%s ", p);
        p = strtok (NULL, " ");
    }
}
