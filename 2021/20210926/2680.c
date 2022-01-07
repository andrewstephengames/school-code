//TODO: unexpected reading behaviour
#include <stdio.h>
#include <string.h>

char word[256], n, sep[] = ".,!?";

int main ()
{
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fgets (word, 256, stdin);
        int m = strlen(word);
        for (int j = 0; j < m; j++)
        {
            if (strchr (sep, word[j]) && j != m-1)
            {
                for (int k = j+1; k < m; k++)
                    word[k-1] = word[k];
                m--;
                j++;
            }
        }
        fputs (word, stdout);
    }
    return 0;
}
