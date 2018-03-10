      /*       fichier POINT5.H         */
      /* déclaration de la classe point */
class point
{
   static nb_pts ;                // compteur du nombre d'objets créés
   float x, y ;                   // coordonnées (cartésiennes) du point
 public :
   point (float, float) ;         // constructeur
   ~point () ;                    // destructeur
   void deplace (float, float) ;  // déplacement
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
	<< " de coordonnées "<< x << " " << y << "\n" ;
}




