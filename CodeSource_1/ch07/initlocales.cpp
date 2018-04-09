#include <iostream>
using namespace std ;
int n ;
void fct (int r) ;
int main ()
{  int p ;
  for (p=1 ; p<=5 ; p++)
    { n = 2*p ;
      fct(p) ;
    }
}
void fct(int r)
{
  int q=n, s=r*n ;
  cout << r << " " << q << " " << s << "\n" ;
}
