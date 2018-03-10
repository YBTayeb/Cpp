      /*       fichier POINT4.H  :  d�claration de la classe point */
class point
{  float r, t ;                   // coordonn�es (polaires) du point
 public :
   point (float, float) ;         // constructeur
   void deplace (float, float) ;  // d�placement
   void homothetie (float) ;      // homoth�tie
   void rotation (float) ;        // rotation
   float abscisse () ;            // abscisse du point
   float ordonnee () ;            // ordonn�e du point
   float rho () ;                 // rayon vecteur
   float theta () ;               // angle
} ;



#include "point4.h"
#include <cmath>                     // pour cos, sin, sqrt et atan
#include <iostream> 
using namespace std ;
const int pi = 3.141592635 ;          // valeur de pi 
	/********** d�finition des fonctions de service ***********/
/* fonction de calcul de l'angle correspondant aux coordonn�es     */
/*           cart�siennes fournies en argument                     */
/* On choisit une d�termination entre -pi et +pi (0 si x=0)        */
float angle (float x, float y)
{  float a = x ? atan (y/x) : 0 ;
   if (y<0) if (x>=0) return a + pi ;
		 else return a - pi ;
   return a ;
}
	/********** d�finition des fonctions membre *****************/
point::point (float abs, float ord)
{  r = sqrt (abs*abs + ord*ord) ;
   t = atan (ord/abs) ;
}
void point::deplace (float dx, float dy)
{  float x = r * cos (t) + dx ;   // nouvelle abscisse 
   float y = r * sin (t) + dy ;   // nouvelle ordonn�e 
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



