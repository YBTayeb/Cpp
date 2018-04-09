#include <iostream>
#include "point.h"    /* déclaration de la classe point  (nécessaire */
                      /*   pour compiler la définition de pointcol)  */
using namespace std ;

class pointcol : public point 
{  short couleur ;
 public :
   void colore (short cl) 
       { couleur = cl ; }
   void affichec () const ;
   void initialisec (int, int, short) ;
} ;

void pointcol::affichec () const 
{  affiche () ;
   cout << "     et ma couleur est : " << couleur << "\n" ;
}

void pointcol::initialisec (int abs, int ord, short cl)
{  initialise (abs, ord) ;
   couleur = cl ;
}

int main()
{
  pointcol p ;
  p.initialisec (10,20, 5) ; p.affichec () ; p.affiche () ;
  p.deplace (2,4) ;          p.affichec () ;
  p.colore (2) ;             p.affichec () ;
}
