#include <stdio.h>
#include <string.h>

char s[31], x[31];

int main ()
{
    scanf ("%s %s", s, x);
    if (strlen(s) == strlen(x))
        for (int i = 0; i < strlen(s); i++)
        {
            if (strchr("aeiou", s[i]) &&
                strchr("aeiou", x[i]))
                printf ("%c", '*');
            else if (!strchr("aeiou", s[i]) &&
                !strchr("aeiou", x[i]))
                printf ("%c", '#');
            else printf ("%c", '?');
        }
    return 0;
}
