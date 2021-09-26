#include <stdio.h>
#include <string.h>

FILE *in, *out;

char word[31], n;

int main ()
{
    int temp, nr = 0;
    in = fopen ("doarvocale.in", "r");
    out = fopen ("doarvocale.out", "w");
    fscanf (in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf (in, "%s", word);
        temp = 0;
        for (size_t j = 0; j < strlen(word); j++)
            if (strchr ("aeiou", word[j])) temp++;
        if (temp == strlen(word)) nr++;
    }
    fprintf (out, "%d", nr);
    fclose (in);
    fclose(out);
    return 0;
}
