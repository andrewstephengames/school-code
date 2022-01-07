#include <stdio.h>

int v[201], n, k;

void citire ()
{
    scanf ("%d", &k);
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &v[i]);
}

void afisare ()
{
    for (int i= n-1; i > -1; i--)
        printf ("%d ", v[i]);
}

int main ()
{
    int i,j,s,found=0;
    citire ();
    for(i = 0; i < n; i++)
    {
        j=v[i];
        s=v[i];
       while (!found)
       {
        if (j%k==0 || s%k==0)
        {
          if(j-v[i] == v[i]-s && s%k==0)
          {
            v[i]=s;
          }
          else
          {
              if(j%k==0)
                v[i]=j;
              else
                if(s%k==0)
                  v[i]=s;
          }
              found = 1;
       }
         j++;
         s--;
       }
       found = 0;
    }
    afisare();
    return 0;
}
