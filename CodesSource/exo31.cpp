#include <iostream>
using namespace std ;

void ajoute (int exp, int & var)
{ var += exp ;
  return ;
}
main()
{ void ajoute (int, int &) ;
  int n = 12 ;
  int p = 3 ;
  cout << "Avant, n = " << n << "\n" ;
  ajoute (2*p+1, n) ;
  cout << "Après, n = " << n << "\n" ;
}