#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{
    char s[256], nr = 0, voc[] = "aeiou";
    fgets (s, 256, stdin);
    for (size_t i = 0; i < strlen(s); i++)
        if (strchr (voc, s[i]))
            if (!strchr (voc, s[i-1]) &&
                !strchr (voc, s[i+1]) &&
                isalpha (s[i-1])      &&
                isalpha (s[i+1]))
            {
                nr++;
                i++;
            }
    printf ("%d\n", nr);
    return 0;
}
