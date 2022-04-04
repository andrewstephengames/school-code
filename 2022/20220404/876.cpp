//TODO: not grabbing last operation
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int n, c[1001], c_size;
char op[10], *preplace;

void push (int el)
{
     c_size++;
     c[c_size] = el;
}

void pop ()
{
     c_size--;
     for (int i = 1; i < c_size; i++)
          c[i] = c[i+1];
}

void front ()
{
     cout << c[1] << endl;
}

int main ()
{
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          fgets (op, 10, stdin);
          if (op[0] == 'p' && op[1] == 'u')
               push (atoi(op+5));
          if (op[0] == 'f')
               front ();
          if (op[0] == 'p' && op[1] == 'o')
               pop();
     }
     return 0;
}
