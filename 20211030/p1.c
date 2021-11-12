#include <stdio.h>

int n, m, st[10];

void init(int k)
{
    st[k]=-1;
}
int succesor(int k)
{
    if (st[k]<1)
    {
        st[k]++;
        return 1;
    }
  return 0;
}
int valid(int k)
{
    int i,nc=0,np=0;
    for (i=1;i<=k;i++)
     if (st[i]==0)
     nc++;
     else np++;
     if (nc>n||np>m)
     return 0;
     if (k>2&&st[k]==0&&st[k-1]==1&&st[k-2]==0)
     return 0;
    return 1;
}
int solutie (int k)
{
    if (k==n+m)
    return 1;
    return 0;
}
void tipar()
{
    int i;
    for (i=1;i<=n+m;i++)
    if (st[i]==0)
    printf ("caine   ");
    else printf ("pisica   ");
    printf ("\n");
}
void back(int k)
{
    int as,ev;
    init(k);
    while (k>0)
    {
        do {
            as=succesor(k);
            if (as)
            ev=valid(k);
        }while (as&&!ev);
        if (as)
        if (solutie(k))
        tipar();
        else
        {
            k++; init(k);
        }
        else k--;
    }
}

int main()
{
   scanf ("%d %d", &n, &m);
   back(1);
   return 0;
}
