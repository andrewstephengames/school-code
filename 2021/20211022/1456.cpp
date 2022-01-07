#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char s[101], *p, ok = 0;
    cin >> s;
    for (size_t i = 0; i < strlen(s); i++)
        if (!strchr ("aeouAEIOU", s[i]))
            ok++;
    if (ok == strlen(s))
        cout << "DA";
    else cout << "NU";
    return 0;
}
