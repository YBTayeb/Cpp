#include <iostream> 
using namespace std ;
class vect
{  int nelem ;                     // nombre de composantes du vecteur
   int * adr ;                     // pointeur sur partie dynamique
 public :
   vect (int n=1) ;                // constructeur "usuel"
   vect (vect & v) ;               // constructeur par recopie 
   ~vect () ;                      // destructeur
   friend ostream & operator << (ostream &, vect &) ;  // sortie sur un flot
   vect & operator = (vect & v) ;  // surdéfinition opérateur affectation 
   int & operator [] (int i) ;     // surdef [] pour vect non constants
   int   operator [] (int i) const ;   // surdef [] pour vect constants
} ;

#include "vect.h"
#include <iostream>  
using namespace std ;
vect::vect (int n)                  // constructeur "usuel"
     { adr = new int [nelem = n] ;
     }
vect::vect (vect & v)               // constructeur par recopie
     { adr = new int [nelem = v.nelem] ;
       int i ;
       for (i=0 ; i<nelem ; i++)
           adr[i] = v.adr[i] ;
     }
vect::~vect ()                    // destructeur
     { delete adr ;
     }
vect & vect::operator = (vect & v)   // surdéfinition opérateur affectation
     { if (this != &v)               // on ne fait rien pour a=a
         { delete adr ;
           adr = new int [nelem = v.nelem] ;
           int i ;
           for (i=0 ; i<nelem ; i++)
             adr[i] = v.adr[i] ;
         }
       return * this ;
     }
int & vect::operator [] (int i)   // surdéfinition opérateur []
     { return adr[i] ;
     }
int   vect::operator [] (int i) const // surdéfinition opérateur [] pour cst
     { return adr[i] ;
     }
ostream & operator << (ostream & sortie, vect & v)     /* voir note  */
     { sortie << "<" ;
       int i ;
       for (i=0 ; i<v.nelem ; i++) sortie << v.adr[i] << " " ;
       sortie << ">" ;
       return sortie ;
     }


#include "vect.h"
#include <iostream>  
using namespace std ;

main()
{  int i ; 
   vect v1(5), v2(10) ;
   for (i=0 ; i<5 ; i++) v1[i] = i ; 
   cout << "v1 = " << v1 << "\n" ;
   for (i=0 ; i<10 ; i++) v2[i] = i*i ;
   cout << "v2 = " << v2 << "\n" ;
   v1 = v2 ;
   cout << "v1 = " << v1 << "\n" ;
   vect v3 = v1 ;
   cout << "v3 = " << v3 << "\n" ;
   vect v4 = v2 ; 
   cout << "v4 = " << v4 << "\n" ;
   // const vect w(3) ; w[2] = 5 ;  // conduit bien à erreur compilation
}

