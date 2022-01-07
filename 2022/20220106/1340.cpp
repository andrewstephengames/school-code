//TODO: segfault
#include <iostream>

using namespace std;

struct Obiect
{
    int G, V;
};

int main ()
{
    int n, gmax, tmp1;
    float eff[1001], castig = 0.0, tmp2;
    Obiect a[1001];
    cin >> n >> gmax;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].G >> a[i].V;
        eff[i] = a[i].V/a[i].G;
    }
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; i++)
            if (eff[i] <= eff[j])
            {
                tmp1 = a[i].G;
                a[i].G = a[j].G;
                a[j].G = tmp1;
                tmp1 = a[i].V;
                a[i].V = a[j].V;
                a[j].V = tmp1;
                tmp2 = eff[i];
                eff[i] = eff[j];
                eff[j] = tmp2;
            }
    int i = 1;
    while (a[i].G <= gmax && i <= n)
    {
        gmax -= a[i].G;
        castig += a[i].V;
        i++;
    }
    if (gmax > 0 && i <= n)
        castig += gmax*eff[i];
    cout << castig << endl;
    return 0;
}
