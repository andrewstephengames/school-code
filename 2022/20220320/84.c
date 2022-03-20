#include <stdio.h>
#include <string.h>

int main ()
{
     size_t i, p, u, con = 0, voc = 0;
     char word[11];
     scanf ("%s", &word);
     for (i = 0; i < strlen (word); i++)
          if (strchr ("aeiouAEIOU", word[i]))
               voc++;
     if (voc == strlen(word))
     {
          printf ("IMPOSIBIL");
          return 0;
     }
     for (i = 0; i < strlen (word); i++)
          if (!strchr ("aeiouAEIOU", word[i]))
               con++;
     if (con == strlen(word))
     {
          printf ("IMPOSIBIL");
          return 0;
     }
     for (i = 0; i < strlen (word); i++)
          if (strchr ("aeiouAEIOU", word[i]))
          {
               p = i; 
               break;
          }
     for (i = strlen(word)-1; i >= 0; i--)
          if (!strchr ("aeiouAEIOU", word[i]))
          {
               u = i; 
               break;
          }
     size_t tmp = word[p];
     word[p] = word[u];
     word[u] = tmp;
     printf ("%s", word);
     return 0;
}
