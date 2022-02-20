#include <stdio.h>
#include <string.h>

int main ()
{
    char s[101];
    size_t exNum = 0, ok = 1;
    scanf ("%s", s);
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (strchr("aeou", s[i]))
            ok = 0;
        if (s[i] == 'i')
            exNum++;
    }
    if (exNum == strlen(s) || ok == 0)
        printf ("NU");
    else printf ("DA");
    return 0;
}
