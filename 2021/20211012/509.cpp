#include <iostream>

using namespace std;

int v[1001], n;

int main ()
{
    int aux, ord;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    do
    {
        ord = 1;
        for (int i = 1; i <= n; i++)
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                ord = 0;
            }
    } while (!ord);
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}
