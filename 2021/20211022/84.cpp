#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    char aux, s[10], voc = 0, con = 0;
    size_t k, l;
    cin >> s;
    for (size_t i = 0; i < strlen(s); i++)
        if (strchr("aeiouAEIOU", s[i]))
        {
            k = i;
            break;
        }
    for (size_t i = strlen(s)-1; i > -1; i--)
        if (!strchr("aeiouAEIOU", s[i]))
        {
            l = i;
            break;
        }
//    cout << s[k] << "\n" << s[l] << "\n" << s[strlen(s)-1] << "\n";
    for (size_t i = 0; i < strlen(s); i++)
    {
        aux = s[k];
        s[k] = s[l];
        s[l] = aux;
    }
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (strchr ("aeiouAEIOU", s[i]))
            voc++;
        if (!strchr ("aeiouAEIOU", s[i]))
            con++;
    }
    if (con == strlen(s) || 
        voc == strlen(s))
        cout << "IMPOSIBIL";
    else cout << s;
    return 0;
}
