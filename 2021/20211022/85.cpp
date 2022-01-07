#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    char word[101];
    size_t n;
    cin.get (word, 101);
    n = strlen(word);
    for (size_t i = 0; i < n; i++)
        if (strchr("aeiouAEIOU", word[i]))
        {
            for (size_t j = n-1; j >= i; j--)
                word[j] = word[i];
            word[i] = '*';
            n++;
        }
//    cout << word;
    for (size_t i = 0; i < n; i++)
        cout << word[i];
    return 0;
}
