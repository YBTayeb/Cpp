#include <iostream>
#include "point.h"
using namespace std ;

class pointcol : public point 
{  short couleur ;
 public :
   void colore (short cl) 
       { couleur = cl ; }
   void affiche () ;                    // redéfinition de affiche de point
   void initialise (int, int, short) ;  // redéfinition de initialise de point
} ;
void pointcol::affiche ()
{  point::affiche () ;               // appel de affiche de la classe point
   cout << "     et ma couleur est : " << couleur << "\n" ;
}
void pointcol::initialise (int abs, int ord, short cl)
{  point::initialise (abs, ord) ;    // appel de initialise de la classe point
   couleur = cl ;
}
int main()
{ pointcol p ;
  p.initialise (10,20, 5) ; p.affiche () ;
  p.point::affiche () ;              // pour forcer l'appel de affiche de point
  p.deplace (2,4) ;          p.affiche () ;
  p.colore (2) ;             p.affiche () ;
}
