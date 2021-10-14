#include <iostream>

using namespace std;

int n, v[1001];

int main ()
{
    int aux, ok;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    do
    {
        ok = 1;
        for (int i = 1; i < n; i++)
            if (v[i] < v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                ok = 0;
            }
    } while (!ok);
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}
