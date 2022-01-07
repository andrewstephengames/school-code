#include <iostream>

using namespace std;

int st[50];

int valid (int k)
{
    if (st[k]%10 != 0)
        return 0;
    if (k > 1)
        if (st[k-1] < st[k])
            return 0;
    return 1;
}

void tipar (int k)
{
    for (int i = 1; i <= 4; i++)
        cout << st[i] << " ";
    cout << endl;
}

void back (int k, int s)
{
    for (int i = st[k-1]; i <= s; i++)
    {
        st[k] = i;
        if (st[k] == s)
//            if (valid(k))
                tipar(k);
        else back (k+1, s-st[k]);
    }    
}

int main ()
{
    st[0] = 10;
    back (1, 4);
    return 0;
}
