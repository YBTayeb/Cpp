#include <iostream>
#include "point.h"     // incorporation des déclarations de point
using namespace std ;
       /* --- Déclaration et définition de la classe pointcol ----- */
class pointcol : public point        // pointcol dérive de point
{  short couleur ;
 public :
   void colore (short cl)  { couleur = cl ; }
} ;
int main()
{ pointcol p ;
  p.initialise (10,20) ; p.colore (5) ;
  p.affiche () ;
  p.deplace (2,4) ;
  p.affiche () ;
}
