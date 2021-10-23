#include <iostream>
#include <string.h>

using namespace std;

size_t ok = 1, ic;

int main ()
{
    char s[101];
    cin >> s;
    for (size_t i = 0; i < strlen(s); ++i)
        if (strchr ("aeouAEOU", s[i]))
            ok = 0;
    for (size_t i = 0; i < strlen(s); ++i)
        if (strchr ("i", s[i]) && strlen(s) > 1)
            ic++;
    if (!ok || ic == strlen(s))
        cout << "NU";
    else cout << "DA";
    return 0;
}
