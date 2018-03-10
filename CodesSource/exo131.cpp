template <class T, int n> class vect
{  T v [n] ;      // vecteur de n elements de type T
  public :
   T & operator [] (int) ;   // operateur d'acces a un element
} ;
template <class T, int n> T & vect<T,n>::operator [] (int i)
{ if ( (i<0) || (i>n) ) i = 0 ;     // protection indice hors limites
  return v [i] ;
}


#include "vectgen1.h"
#include <iostream>  
using namespace std ;
main()
{ vect<int, 10> vi  ;
  vi[5] = 5 ; vi[2] = 2 ;
  cout << vi[2] << " " << vi[5] << "\n" ;
  vect<double, 3> vd ;
  vd[0] = 0.0 ; vd[1] = 0.1 ; vd[2] = 0.2 ;
  cout << vd[0] << " " << vd[1] << " " << vd[2] << "\n" ;
  cout << vd[12] << "\n" ;
  vd[12] = 1.2 ; cout << vd[12] << " " << vd[0] ;
}
