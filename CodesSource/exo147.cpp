#include <iostream>  
using namespace std ;
template <class T> class vect
{  int nelem ;                   // nombre de composantes du vecteur
   T * adr ;                     // pointeur sur partie dynamique
 public :
   vect (int n=1) ;              // constructeur "usuel"
   vect (vect & v) ;             // constructeur par recopie
   ~vect () ;                    // destructeur
   friend ostream & operator << (ostream &, vect <T> &) ;
   vect<T> operator = (vect<T> & v) ;  // surdéfinition opérateur affectation
   T & operator [] (int i) ;           // surdef [] pour vect non constants
   T   operator [] (int i) const ;     // surdef [] pour vect constants
} ;

Voici la définition des différentes fonctions membre :
#include "vectgen.h"
#include <iostream> 
using namespace std ;
template <class T> vect<T>::vect (int n)      // constructeur "usuel"
     { adr = new T [nelem = n] ;
     }
template <class T> vect<T>::vect (vect<T> & v)   // constructeur par recopie
     { adr = new T [nelem = v.nelem] ;
       int i ;
       for (i=0 ; i<nelem ; i++)
           adr[i] = v.adr[i] ;
     }
template <class T> vect<T>::~vect ()       
     { delete adr ;
     }
template <class T> vect<T>  vect<T>::operator = (vect<T> & v)
     { if (this != &v)              // on ne fait rien pour a=a
         { delete adr ;
           adr = new T [nelem = v.nelem] ;
           int i ;
           for (i=0 ; i<nelem ; i++)
             adr[i] = v.adr[i] ;
         }
       return * this ;
     }
template <class T> T & vect<T>::operator [] (int i)      
     { return adr[i] ;
     }
template <class T> T   vect<T>::operator [] (int i) const 
     { return adr[i] ;
     }
template <class T> ostream & operator << (ostream & sortie, vect<T> & v)
     { sortie << "<" ;
       int i ;
       for (i=0 ; i<v.nelem ; i++) sortie << v.adr[i] << " " ;
       sortie << ">" ;
       return sortie ;
     }




#include "vectgen.h"
#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties du chapitre II
using namespace std ;
main()
{  int i ;
   vect <int> v1(5) ; vect <int> v2(10) ;
   for (i=0 ; i<5 ; i++) v1[i] = i ;
   cout << "v1 = " << v1 << "\n" ;
   for (i=0 ; i<10 ; i++) v2[i] = i*i ;
   cout << "v2 = " << v2 << "\n" ;
   v1 = v2 ;
   cout << "v1 = " << v1 << "\n" ;
   vect <int> v3  = v1 ;
// vect <double> v3 = v1 ;               //  serait rejete
   cout << "v3 = " << v3 << "\n" ;
// const vect <float> w(3) ; w[2] = 5 ;  // conduit bien a erreur compilation
// vect <float> v4(5) ; v4 = v1 ;        // conduit bien a erreur compilation
}
