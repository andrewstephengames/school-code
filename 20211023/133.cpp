#include <iostream>
#include <string.h>
using namespace std;

size_t m;

int main ()
{
    char nume[21], prenume[21], s[42];
    cin >> nume >> prenume;
    for (size_t i = 0; i < strlen(prenume); i++)
        if (!strchr("aeiouAEIOU", prenume[i]))
        {
            s[m] = prenume[i];
            m++;
        }
    s[strlen(s)] = ' ';
    strcat (s, nume);
    cout << s;
    return 0;
}
