#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    char s[21];
    cin >> s;
    for (size_t i = 0; i < strlen (s); i++)
        if (!strchr("aeiouAEIOU", s[i]))
            cout << s[i];
    return 0;
}
