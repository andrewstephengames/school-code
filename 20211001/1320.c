//TODO: fix conditions
#include <stdio.h>

int n, a[1001];

void citire ()
{
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
}

int constant ()
{
    int cons = 1;
    for (int i = 0; i < n-1; i++)
        if (a[i] != a[i+1]) cons = 0;
    return cons;
}

int sc ()
{
    int scr = 1;
    for (int i = 0; i < n-1; i++)
        if (a[i] > a[i+1] ||
            a[i] >= a[i+1] ||
            a[i] <= a[i+1] ||
            a[i] == a[i+1])
            scr = 0;
    return scr;
}

int c ()
{
    int cc = 1;
    for (int i = 0; i < n-1; i++)
        if (a[i] > a[i+1] ||
            a[i] < a[i+1] ||
            a[i] == a[i+1])
            cc = 0;
    return cc;
}

int sd ()
{
    int sdc = 1;
    for (int i = 0; i < n-1; i++)
        if (a[i] < a[i+1] ||
            a[i] <= a[i+1] ||
            a[i] >= a[i+1] ||
            a[i] == a[i+1])
            sdc = 0;
    return sdc;
}

int d ()
{
    int dc = 1;
    for (int i = 0; i < n-1; i++)
        if (a[i] < a[i+1] ||
            a[i] <= a[i+1] ||
            a[i] > a[i+1] ||
            a[i] == a[i+1])
            dc = 0;
    return dc;
}

int main ()
{
    citire ();
    if (constant()) 
    {
        printf ("sir constant"); 
        return 0;
    }
    if (sc ()) 
    {
        printf ("sir strict crescator"); 
        return 0;
    }
    if (c ()) 
    {
        printf ("sir crescator"); 
        return 0;
    }
    if (sd ()) 
    {
        printf ("sir strict descrescator"); 
        return 0;
    }
    if (d ()) 
    {
        printf ("sir descrescator"); 
        return 0;
    }
    else 
    {
        printf ("sir neordonat"); 
        return 0;
    }
    return 0;
}
