// définition du patron de fonctions
template <class T> T somme (T * tab, int nelem)
{
  T som ;
  int i ;
  som = 0 ;
  for (i=0 ; i<nelem ; i++)  som = som + tab[i] ;
  return som ;
}

// exemple d'utilisation
#include <iostream>  
using namespace std ;
main()
{
  int ti[] = {3, 5, 2, 1} ;
  float tf [] = {2.5, 3.2, 1.8} ;
  char tc[] = { 'a', 'e', 'i', 'o', 'u' } ;
  cout << somme (ti, 4) << "\n"  ;
  cout << somme (tf, 3) << "\n"  ;
  cout << somme (tc, 5) << "\n"  ;
}
