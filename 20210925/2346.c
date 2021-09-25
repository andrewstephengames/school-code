//TODO: only outputs one character after space in paritatesiruri.out
#include <stdio.h>
#include <string.h>

FILE *in, *out;

char word[10001], k;

int main ()
{
    in = fopen ("paritatesiruri.in", "r");
    out = fopen ("paritatesiruri.out", "w");
    fscanf (in, "%d", &k);
    for (int i = 0; i < k; i++)
    {
        fscanf (in, "%s", word);
        for (int j = 0; j < strlen(word); j++)
            if (j%2) fputc (word[j], out);
        fputc (' ', out);
        for (int j = 0; j < strlen(word); j++)
            if (!j%2) fputc (word[j], out);
        fputc ('\n', out);
    }
    return 0;
}
