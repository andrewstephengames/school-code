#include <iostream>

using namespace std;

int cifmaxnr(int n)
{
    int max = -1;
    if (n < 10) return n;
    while (n)
    {
        if (n%10 > max) max = n%10;
        n /= 10;
    }
    return max;
}

int maxnr = -1;
int cifmax (int n)
{
    if (n < 10 && n > maxnr) 
    {
        maxnr = n; 
        return maxnr;
    }
    else if (n%10 > maxnr) 
    {
        maxnr = n; 
        return maxnr;
    }
    if (n%10 < maxnr) return cifmax(n/10);
    maxnr = n%10;
}

int main ()
{
    int n;
    cin >> n;
    cout << cifmax(n) << "\n" << cifmaxnr(n);
    return 0;
}
