#include <fstream>
#include <cstring>
using namespace std;

ifstream in ("palindrom.in");
ofstream out ("palindrom.out");

int palindrom (char *s)
{
    for (size_t i = 0; i < strlen(s)/2; i++)
        if (s[strlen(s)-i-1] != s[i]) 
            return 0;
    return 1; 
}

int main ()
{
    int n;
    char word[21];
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> word;
        out << palindrom(word) << "\n";
    }
    return 0;
}
