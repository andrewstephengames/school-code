#include <stdio.h>
#include <string.h>

size_t ok = 1, ic;

int main ()
{
    char s[101];
    scanf ("%s", s);
    for (size_t i = 0; i < strlen(s); ++i)
        if (strchr ("aeouAEOU", s[i]))
            ok = 0;
    for (size_t i = 0; i < strlen(s); ++i)
        if (strchr ("i", s[i]) && strlen(s) > 1)
            ic++;
    if (!ok || ic == strlen(s))
        printf ("NU");
    else printf ("DA");
    return 0;
}
