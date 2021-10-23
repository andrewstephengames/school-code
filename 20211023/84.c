#include <stdio.h>
#include <string.h>

int main ()
{
    char s[11];
    size_t p, u, aux;
    scanf ("%s", s);
    for (size_t i = 0; i < strlen(s); i++)
        if (strchr ("aeiouAEIOU", s[i]))
        {
            p = i;
            break;
        }
    for (size_t i = strlen(s)-1; i; i--)
        if (!strchr("aeiouAEIOU", s[i]))
        {
            u = i;
            break;
        }
    for (size_t i = 0; i < strlen(s); i++)
    {
        aux = s[p];
        s[p] = s[u];
        s[u] = aux;
    }
    printf ("%s", s);
    return 0;
}
