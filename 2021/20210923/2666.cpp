#include <iostream>

using namespace std;

#include <string.h>
void Trim (char s[])
{
    for (int  i = 0; i < strlen (s); i++)
    {
        while (s[i] == ' ')
        {
            s[i] = 8;
            --strlen(s);
        }
    }
}

int main ()
{
    char word[101];
    for (int i = 0; i < strlen (word); i++)
        cin >> word[i];
    Trim (word);
    cout << word;
    return 0;
}
