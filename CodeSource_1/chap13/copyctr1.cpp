#include <iostream>
using namespace std ;
class vect
{  int nelem ;                      // nombre d’éléments
   double * adr ;                   // pointeur sur ces éléments
  public :
   vect (int n)                     // constructeur "usuel"
   { adr = new double [nelem = n] ;
      cout << "+ const. usuel - adr objet : " << this
          << " - adr vecteur : " << adr << "\n" ;
   }
   ~vect ()                         // destructeur
    { cout << "- Destr. objet - adr objet : "
          << this << " - adr vecteur : " << adr << "\n" ;
      delete adr ;
    }
} ;
void fct (vect b)
{ cout << "*** appel de fct ***\n" ;
}
int main()
{ vect a(5) ;
  fct (a) ;
}
