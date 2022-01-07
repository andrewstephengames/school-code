#include <stdio.h>
#include <string.h>

int isnum (char c)
{
    return (c >= '0' && c <= '9');
}

int main ()
{
    size_t len = 0;
    char s[101], t[101];
    fgets (s, 101, stdin);
    for (size_t i = 0; i < strlen(s); i++)
        if (isnum(s[i]))
        {
            t[len] = s[i];
            len++;
        }
    if (len == 0)
        printf ("Sir vid");
    else fputs (t, stdout);
    return 0;
}
