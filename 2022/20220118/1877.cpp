#include <iostream>
using namespace std;

int main ()
{
    int n, k, a[1001], s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];    
    cin >> k;
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    for (int i = 1; i <= k; i++)
        s += (-1)*a[i];
        /*
        if (a[i] < 0)
            s += (-1)*a[i];
        else s += a[i];
        */
    for (int i = k+1; i <= n; i++)
        s += a[i];
    cout << s << endl;
    return 0;
}
