#include <iostream>

using namespace std;

int main ()
{
    long long int n, pos = 1, neg = 1, a[100001], tmp, min, min1, max, max1;
    cin >> n >> a[1];
    min = a[1];
    min1 = a[1];
    max = a[1];
    max1 = a[1];
    for (int i = 2; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            min1 = min;
            min = a[i];
        }
        else if (a[i] < min1)
            min1 = a[i];
        if (a[i] > max)
        {
            max1 = max;
            max = a[i];
        }
        else if (a[i] > max1)
            max1 = a[i];
    }
    /*
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    */
    /*if (a[1] < 0 && a[2] > 0 ||
        a[1] > 0 && a[2] < 0)
    */
    /*
    neg = a[1]*a[2];
    pos = a[n]*a[n-1];
    */
    neg = min*min1;
    pos = max*max1;
    if (neg > pos)
        cout << neg;
    else cout << pos;
    return 0;
}
