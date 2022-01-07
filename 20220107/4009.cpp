#include <iostream>

using namespace std;

int main ()
{
    int n, s = 0, a[1001], k = 0, p = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    int i;
    for (i = 0; i < n && a[i] <= s; i++)
    {
        s -= a[i];
        k++;
    }
    if (i < n)
        p = a[i] - s;
    cout << k << " " << p;
    return 0;
}
