#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main ()
{
     FILE *in = fopen ("capslock.in", "r");
     FILE *out = fopen ("capslock.out", "w");
     char text[256];
     size_t i, caps = 0;
     fgets (text, 256, in);
     for (i = 0; i < strlen(text); i++)
     {
          if (text[i] == '#' && !caps)
          {
               caps = 1; 
               continue;
          }
          if (text[i] == ' ')
          {
               fprintf (out, "%c", text[i]);
               continue;
          }
          if (caps && text[i] != '#' && isalpha(text[i]))
               fprintf (out, "%c", text[i] -= 32);
          if (!caps && text[i] != '#')
               fprintf (out, "%c", text[i]);
          if (caps && text[i] == '#')
          {
               caps = 0;
               continue;
          }
     }
     fprintf (out, "%c", '\0');
     fprintf (stdout, "%.3f ms\n", (float) clock()/1000);
     fclose (in);
     fclose (out);
     return 0;
}
