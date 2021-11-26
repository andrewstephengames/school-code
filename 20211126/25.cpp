//FIXME: segfault
#include <iostream>
using namespace std;

#include <limits.h>
#include <string.h>
int cmmnr (int n)
{
    int max = INT_MIN, maxp, a[10], m = 0, nr = 0, k = 0, ncp = n;
    while (n)
    {
        a[m] = n%10;
/*
        if (a[m] > max)
        {
            max = a[m];
            maxp = m;
        }
*/
        n /= 10;
        m++;
    }
    while ((strlen((char*)nr)) == strlen ((char*)n))
    for (int i = 0; i < m; i++)
        if (a[i] == max-k)
        {
            nr = nr*10+max;
            k++;
        }
    return nr;
}

int main ()
{
    cout << cmmnr(69420);
    return 0;
}
