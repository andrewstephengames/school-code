//TODO: more work needed than anticipated
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char s[1001];
int a[1001], n;

char *cat (int n)
{
//    char *s = malloc (sizeof (char)*1001);
    int m = strlen(s);
    if (!n%2)
    {
        m += n;
        strncat (s, s, n);
    }
    else
    {
        m += n;
        size_t i;
        for (i = m ; i > -1 && s[i] != '\0' ; i--)
            s[m + i] = s[i];
        s[m+i] = '\0';
    }
    return s;
}

int main ()
{
    scanf ("%s", s);
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        cat (a[i]);
    }
    printf ("%s", s);
    return 0;
}
