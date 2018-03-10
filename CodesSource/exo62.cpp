
      /*       fichier POINT1.H         */
      /* déclaration de la classe point */
class point
{  
   float x, y ;                   // coordonnées (cartésiennes) du point
 public :
   point (float, float) ;         // constructeur
   void deplace (float, float) ;  // déplacement
   void affiche () ;              // affichage
} ;


	      /* définition de la classe point */
#include "point1.h"
#include <iostream>
using namespace std ;
point::point (float abs, float ord)
{  x = abs ; y = ord ;
}
void point::deplace (float dx, float dy)
{  x = x + dx ; y = + dy ;
}
void point::affiche ()
{  cout << "Mes coordonnées cartésiennes sont " << x << " " << y << "\n" ;
}



#include <iostream>
using namespace std ;
#include "point1.h"

main ()
{ 
   point p (1.25, 2.5) ;  // construction d'un point de coordonnées 1.25 2.5
   p.affiche () ;         // affichage de ce point
   p.deplace (2.1, 3.4) ; // déplacement de ce point
   p.affiche () ;         // nouvel affichage
}
