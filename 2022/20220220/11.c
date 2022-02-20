#include <stdio.h>
#include <string.h>

int main ()
{
    char s[21];
    fgets (s, 21, stdin);
    for (size_t i = 0; i < strlen(s); i++)
        if (strchr ("aeiou", s[i]))
            s[i] -= 32;
    printf ("%s", s);
    return 0;
}
