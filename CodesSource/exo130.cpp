template <class T> class vect
{  int nelem ;    // nombre d'elements
   T * adr ;      // adresse zone dynamique contenant les elements
  public :
   vect (int) ;              // constructeur
   ~vect () ;                // destructeur
   T & operator [] (int) ;   // operateur d'acces a un element
} ;
template <class T> vect<T>::vect (int n)
{ adr = new T [nelem = n] ;
}
template <class T> vect<T>::~vect ()
{ delete adr ;
}
template <class T> T & vect<T>::operator [] (int i)
{ if ( (i<0) || (i>nelem) ) i = 0 ;     // protection indice hors limites
  return adr [i] ;
}



#include "vectgen.h"
#include <iostream>  
using namespace std ;
main()
{ vect<int> vi (10) ;
  vi[5] = 5 ; vi[2] = 2 ;
  cout << vi[2] << " " << vi[5] << "\n" ;
  vect<double> vd (3) ;
  vd[0] = 0.0 ; vd[1] = 0.1 ; vd[2] = 0.2 ;
  cout << vd[0] << " " << vd[1] << " " << vd[2] << "\n" ;
  cout << vd[12] << "\n" ;
  vd[12] = 1.2 ; cout << vd[12] << " " << vd[0] ;
}
