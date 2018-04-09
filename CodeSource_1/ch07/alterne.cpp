#include <iostream>
using namespace std ;
int & alterne (int &, int &) ;
int main ()
{ int n=1, p=3, q=5 ;
  alterne (n, p ) = 0 ;
  cout << "n = " << n << " p = " << p << "\n" ;
  alterne (p, q) = 12 ;
  cout << "p = " << p << " q = " << q << "\n" ;
}
int & alterne (int & n1, int & n2)
{ static bool indic = true ;
  if (indic) { indic = false ; return n1 ; }
         else return n2 ;
}