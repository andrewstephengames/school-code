#include <iostream>

using namespace std;

void factorial (int n, int &f)
{
    if (n < 2) f = 1;
    else 
    {
        factorial (n-1, f);
        f *= n;
    }
}


int main ()
{
    int n, f;
    scanf ("%d", &n);
    factorial (n, f);
    printf ("%d", f);
    return 0;
}
