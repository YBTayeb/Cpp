      /*       fichier POINT4.H  :  déclaration de la classe point */
class point
{  float r, t ;                   // coordonnées (polaires) du point
 public :
   point (float, float) ;         // constructeur
   void deplace (float, float) ;  // déplacement
   void homothetie (float) ;      // homothétie
   void rotation (float) ;        // rotation
   float abscisse () ;            // abscisse du point
   float ordonnee () ;            // ordonnée du point
   float rho () ;                 // rayon vecteur
   float theta () ;               // angle
} ;



#include "point4.h"
#include <cmath>                     // pour cos, sin, sqrt et atan
#include <iostream> 
using namespace std ;
const int pi = 3.141592635 ;          // valeur de pi 
	/********** définition des fonctions de service ***********/
/* fonction de calcul de l'angle correspondant aux coordonnées     */
/*           cartésiennes fournies en argument                     */
/* On choisit une détermination entre -pi et +pi (0 si x=0)        */
float angle (float x, float y)
{  float a = x ? atan (y/x) : 0 ;
   if (y<0) if (x>=0) return a + pi ;
		 else return a - pi ;
   return a ;
}
	/********** définition des fonctions membre *****************/
point::point (float abs, float ord)
{  r = sqrt (abs*abs + ord*ord) ;
   t = atan (ord/abs) ;
}
void point::deplace (float dx, float dy)
{  float x = r * cos (t) + dx ;   // nouvelle abscisse 
   float y = r * sin (t) + dy ;   // nouvelle ordonnée 
   r = sqrt (x*x + y*y) ;
   t = angle (x, y) ;  
}
void point::homothetie (float hm)
{  r *= hm ;
}
void point::rotation (float th)
{  t += th ;
}
float point::abscisse ()
{ return r * cos (t) ;
}
float point::ordonnee ()
{ return r * sin (t) ;
}
float point::rho ()
{ return r ;
}
float point::theta ()
{ return t ;
}



