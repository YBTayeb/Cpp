#include <cstdlib>
#include <iostream>  
using namespace std ;

template <class T> class stack_gene
{   int nmax ;                   // nombre maximum de la valeurs de la pile
    int nelem ;                  // nombre courant de valeurs de la pile
    T * adv ;                    // pointeur sur les valeurs
  public :
    stack_gene (int = 20) ;            // constructeur
    ~stack_gene () ;                   // destructeur
    stack_gene & operator << (T) ;   // opérateur d'empilage
    stack_gene & operator >> (T &) ; // opérateur de dépilage (attention T &)
    int operator ++ () ;              // opérateur de test pile pleine
    int operator -- () ;              // opérateur de test pile vide
                                      // opérateur << pour flot de sortie
    friend ostream & operator << (ostream &, stack_gene<T> &) ;
} ;

template <class T> stack_gene<T>::stack_gene (int n)
{   nmax = n ;
    adv = new T [nmax] ;
    nelem = 0 ;
}
template <class T> stack_gene<T>::~stack_gene ()
{   delete adv ;
}
template <class T> stack_gene<T> & stack_gene<T>::operator << (T n)
{   if (nelem < nmax) adv[nelem++] = n ;
    return (*this) ;
}
template <class T> stack_gene<T> & stack_gene<T>::operator >> (T & n)
{   if (nelem > 0) n = adv[--nelem] ;
    return (*this) ;
}
template <class T> int stack_gene<T>::operator ++ ()
{   return  (nelem == nmax) ;
}
template <class T> int stack_gene<T>::operator -- ()
{   return (nelem == 0) ;
}
template <class T> ostream & operator << (ostream & sortie, stack_gene<T> & p)
{ sortie << "// " ;
  int i ;
  for (i=0 ; i<p.nelem ; i++) sortie << p.adv[i] << " " ;
  sortie << "//" ;
  return sortie ;
}




	 /************ programme d'essai de stack_gene *********/
#include "stackg.h"
#include <iostream> 
using namespace std ;
main()
{   stack_gene <int> pi(20) ;           // pile de 20 entiers maxi
    cout << "pi pleine : " << ++pi << " vide : " << --pi << "\n" ;
    pi << 2 << 3 << 12 ;
    cout << "pi = " << pi << "\n" ;
    stack_gene <float> pf(10) ;         // pile de 10 flottants maxi
    pf << 3.5 << 4.25 << 2 ;       // 2 sera converti en float
    cout << "pf = " << pf << "\n" ;
    float x ;  pf >> x ;
    cout << "haut de la pile pf = " << x ;
    cout << "pf = " << pf << "\n" ;
}
