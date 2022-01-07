//TODO: SEGFAULT
#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    char s[101], *p, tmp;
    cin.get (s, 101);
    p = strtok (s, " ");
    while (p)
    {
        tmp = p[0];
        for (size_t i = 0; i <= strlen (p); i++)
            p[i] = p[i+1];
        p[strlen(p)] = '\0';
        p[strlen(p)-1] = tmp;
        cout << p << " ";
        p = strtok (s, NULL);
    }
    return 0;
}
