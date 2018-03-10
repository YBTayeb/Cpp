#include <iostream>  
using namespace std ;
template <class T> T carre (T a)
  { return a * a ;
  }
main()
{ int n = 5 ;
  float x = 1.5 ;
  cout << "carre de " << n << " = " << carre (n) << "\n" ;
  cout << "carre de " << x << " = " << carre (x) << "\n" ;
}
