//FIXME: undesired results
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    char s[256], maxv;
    size_t f[130], max;
    fgets (s, 256, stdin);
    for (size_t i = 0; i < strlen(s); i++)
        if (strchr ("aeiouAEIOU", s[i]))
            f[(int) s[i]]++;
    for (size_t i = 'A'; i <= 'z' && (isalpha(i)); i++) 
        if (f[i] > 0)
        if (f[i] > max)
        {
            max = f[i];
            maxv = (char) i;
            printf ("%c\n", maxv);
        }
//    printf ("%c", maxv);
    return 0;
}
