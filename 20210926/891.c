//TODO: fixme
#include <stdio.h>
#include <string.h>

char s[256], t[256];

int main ()
{
    fgets (s, 256, stdin);
    int n = strlen(s);
    for (size_t i = 0; i < n; i++)
    {
        if (strchr ("aeiou", s[i]))
        {
            for (size_t j = n-1; j > i; j--)
            {
                s[j+2] = s[j+1];
                s[j+1] = s[j];
            }
            s[i+1] = 'p';
            s[i+2] = s[i];
            n+=2; i+=2;
        }
    }
/*
    for (size_t i = 0; i < n; i++)
    {
        if (strchr ("aeiou", s[i]))
        {
            for (size_t j = n-1; j > i; j--)
                s[j+1] = s[j];
            s[i+1] = s[i-1];
            n++; i++;
        }
    }
*/
    strcpy (t, s);
    fputs (t, stdout);
    return 0;
}
