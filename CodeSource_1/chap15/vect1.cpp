#include <iostream>
using namespace std ;

class vect
  {
    int nelem ;                  // nombre d'éléments
    int * adr ;                  // pointeur sur ces éléments
   public :
    vect (int n)                 // constructeur
     { adr = new int [nelem = n] ;
       for (int i=0 ; i<nelem ; i++) adr[i] = 0 ;
       cout << "++ obj taille " << nelem << " en " << this 
            << " - v. dyn en " << adr << "\n" ;
     }

    ~vect ()                     // destructeur
     { cout << "-- obj taille " << nelem << " en " 
            << this << " - v. dyn en " << adr << "\n" ;
       delete adr ;
     }
    vect & operator = (const vect &) ;    // surdéfinition opérateur =
  } ;


vect & vect::operator = (const vect & v)
{ cout << "== appel operateur = avec adresses  " << this << " " << &v << "\n" ; 
   if (this != &v)
        { cout << "  effacement vecteur dynamique en   " << adr << "\n" ;
          delete adr ;
          adr = new int [nelem = v.nelem] ;
          cout << "  nouveau vecteur dynamique en      " << adr << "\n" ;
          for (int i=0 ; i<nelem ; i++) adr[i] = v.adr[i] ;
        }
      else cout << "  on ne fait rien \n" ;
   return * this ;
}
int main()
{    vect a(5), b(3), c(4) ;
    cout << "** affectation a=b \n" ;
    a = b ;
    cout << "** affectation c=c \n" ;
    c = c ;
    cout << "** affectation a=b=c \n" ;   
    a = b = c ;
}
