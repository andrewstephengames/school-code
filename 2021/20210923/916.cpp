#include <iostream>

using namespace std;

int factorial (int n, int &f)
{
    if (n < 2) f = 1;
    return factorial (n-1, f); f *= n;
}

int main ()
{
    int n, f;
    cin >> n;
    factorial (n, f);
    cout << f;
    return 0;
}
