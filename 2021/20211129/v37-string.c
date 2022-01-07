#include <stdio.h>
#include <string.h>

int main ()
{
    char *p, s[256];
    fgets (s, 256, stdin);
    p = strtok (s, " ");
    while (p)
    {
        if (p[0] > 96)
            p[0] -= 32; 
        if (p[strlen(p)-1] > 96)
            p[strlen(p)-1] -= 32;
        printf ("%s ", p);
        p = strtok (s, NULL);
    }
    return 0;
}
