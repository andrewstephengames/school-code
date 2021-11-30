//FIXME: segfault
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isvowel (char c)
{
    if (strchr ("aeiou", c))
        return 1;
    return 0;
}

char* ogl (char *c)
{
    int len = 0;
    char *s;
    s = malloc (sizeof (char)*256);
    for (int i = strlen(c)-1; i > -1; i--)
    {
        s[len] = c[i];
        len++;
    }
    return s;
}

int main ()
{
    char s[256], *p;
    fgets (s, 256, stdin);
    p = strtok (s, " ");
    while (p)
    {
        if (isvowel (p[0]))
            printf ("%s ", ogl(p));
        else printf ("%s ", p);
        p = strtok (s, NULL);
    }
    return 0;
}
