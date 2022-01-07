#include <iostream>
using namespace std;

int h[1001], v[1001], n;

int main ()
{
    int ord, aux;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
        v[i] = i;
    }
    do
    {
        ord = 1;
        for (int i = 1; i < n; i++)
        {
            if (h[i] > h[i+1])
            {
                aux = h[i];
                h[i] = h[i+1];
                h[i+1] = aux;
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                ord = 0;
            }
        }
    } while (!ord);
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}
