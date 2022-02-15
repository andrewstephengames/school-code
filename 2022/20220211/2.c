/*
    2. 
    Scrieți un program C/C++ care citește de la tastatură două numere naturale din intervalul [2,102], 
    m și n, și construiește în memorie un tablou bidimensional cu m linii și n coloane, cu proprietatea că 
    parcurgându-l linie cu linie de sus în jos și fiecare linie de la stânga la dreapta, se obține șirul primelor 
    m*n pătrate perfecte pare, ordonat strict descrescător, ca în exemplu.  
     
    Elementele tabloului obținut se afișează pe ecran, fiecare linie a tabloului pe câte o linie 
    a ecranului, valorile de pe aceeași linie fiind separate prin câte un spațiu. 
    Exemplu: pentru m=2, n=3 se obține tabloul alăturat. 
    (10p.) 
    100 64 36 
    16  4  0 
*/
#include <stdio.h>

int main ()
{
    int m, n, a[105][105], b[105];
    fscanf (stdin, "%d %d", &m, &n);
    for (int i = m*n; i > 0; i--)
        
    return 0;
}
