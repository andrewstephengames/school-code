#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
ifstream in ("vocmax.in");
ofstream out ("vocmax.out");

int main ()
{
    int n, nr, max = -1;
    char s[256], t[256];
    in >> n;
    for (int i = 0; i < n+1; ++i)
    {
        nr = 0;
        in.getline (s, 256);
        for (size_t j = 0; j < strlen(s); ++j)
            if (strchr ("aeiouAEIOU", s[j]))
                nr++;
        if (nr > max) 
        {
            max = nr;
            strcpy (t, s);
        }
    }
    out << t;
    return 0;
}
