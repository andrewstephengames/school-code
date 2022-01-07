#include <stdio.h>
#include <string.h>

FILE *palin, *palout;

char word [21];

int palindrom (char word[])
{
    int nr = 0, m;
    for (int i = 0; i < strlen(word); i++)
        for (int j = strlen(word)-1; j > -1; j--)
        {
            if (word[i] == word[j])
            {
                nr++;
            }
            i++;
            m = i;
        }
    if (nr == m) return 1;
    return 0;
}

int main ()
{
    int n;
    palin = fopen("palindrom.in", "r");
    palout = fopen("palindrom.out", "w");
    fscanf (palin, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf (palin, "%s", word);
        fprintf (palout, "%d\n", palindrom (word));
    }
    fclose (palin);
    fclose (palout);
    return 0;
}
