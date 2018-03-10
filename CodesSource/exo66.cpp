      /*       fichier POINT5.H         */
      /* d�claration de la classe point */
class point
{
   static nb_pts ;                // compteur du nombre d'objets cr��s
   float x, y ;                   // coordonn�es (cart�siennes) du point
 public :
   point (float, float) ;         // constructeur
   ~point () ;                    // destructeur
   void deplace (float, float) ;  // d�placement
   void affiche () ;              // affichage
} ;


#include "point5.h"
#include <iostream>
using namespace std ;
int point::nb_pts = 0 ;                 // initialisation obligatoire statique nb_pts
point::point (float abs, float ord)     // constructeur
{  x = abs ; y = ord ;
   nb_pts++ ;                           //    actualisation nb points
}
point::~point ()                        // destructeur
{  nb_pts-- ;                           //    actualisation nb points
}
void point::deplace (float dx, float dy)
{  x = x + dx ; y = + dy ;
}
void point::affiche ()
{  cout << "Je suis un point parmi " << nb_pts
	<< " de coordonn�es "<< x << " " << y << "\n" ;
}




