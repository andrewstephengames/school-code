#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *capsin, *capsout;

char s[256];

char up (char x)
{
    x -= 32;
    return x;
}

int main ()
{
    capsin = fopen ("capslock.in", "r");
    capsout = fopen ("capslock.out", "w");
    int caps = 0;
    fscanf (capsin, "%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        while (caps)
        {
            if (!caps%2 && s[i] != '#')
                up(s[i]);
            if (s[i] == '#') caps++;
        }
        if (s[i] == '#') caps++;
    }
    fprintf (capsout, "%s", s);
    return 0;
}
