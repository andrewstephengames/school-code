//FIXME: random chars after last char in original string
#include <stdio.h>
#include <string.h>

int main ()
{
    char s[256], sc[256];
    fgets (s, 256, stdin);
    s[0] -= 32;
    for (size_t i = 1; i < strlen(s)-1; i++)
        if (s[i+1] == ' ' || s[i-1] == ' ')
            if (s[i] != ' ')
                s[i] -= 32;
    strcpy (sc, s);
    sc[strlen(s)-1] -= 32;
//    sc[strlen(s)] = '\0';
    printf ("%s\n", sc);
    return 0;
}
