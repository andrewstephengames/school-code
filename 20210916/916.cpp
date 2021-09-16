#include <iostream>

using namespace std;

void factorial (int n, int &f)
{
    if (n == 0) f = 1; 
    else factorial (n-1, (f-1));
}

int main ()
{
    int n, f;
    cin >> n >> f;
    factorial (n, f);
    cout << f;
    return 0;
}
