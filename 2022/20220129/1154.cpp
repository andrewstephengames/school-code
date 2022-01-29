#include <iostream>
using namespace std;

int a[200001], b[200001], n, n1, x;

void sortare ()
{
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int searx (int st, int dr, int x)
{
    int m;
    if (st > dr)
        return 0;
    else
    {
        m = (st+dr)/2;
        if (a[m] == x)
            return 1;
        else
            if (x < a[m])
                return searx(st, m-1, x);
            else return searx (m+1, dr, x);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> n1;
    for (int i = 1; i <= n1; i++)
        cin >> b[i];
    sortare();
    for (int i = 1; i <= n1; i++)
        cout << searx (1, n, b[i]) << " ";
    return 0;
}
