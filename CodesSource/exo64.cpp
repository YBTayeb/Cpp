      /*       fichier POINT3.H         */
      /* d�claration de la classe point */
class point
{  float x, y ;                   // coordonn�es (cart�siennes) du point
 public :
   point (float, float) ;         // constructeur
   void deplace (float, float) ;  // d�placement
   void homothetie (float) ;      // homothetie
   void rotation (float) ;        // rotation
   float abscisse () ;            // abscisse du point
   float ordonnee () ;            // ordonn�e du point
   float rho () ;                 // rayon vecteur
   float theta () ;               // angle
} ;



	 /**************** d�clarations de service *****************/
#include "point3.h"
#include <cmath>                     // pour sqrt et atan
#include <iostream>
using namespace std ;
const float pi = 3.141592653 ;        // valeur de pi 
float angle (float, float) ;          // fonction de service (non membre)
	 /*************** d�finition des fonctions membre **********/
point::point (float abs, float ord)
{  x = abs ; y = ord ;
}
void point::deplace (float dx, float dy)
{  x += dx ; y += dy ;
}
void point::homothetie (float hm)
{  x *= hm ; y *= hm ;
}

void point::rotation (float th)
{  float r = sqrt (x*x + y*y) ;       // passage en 
   float t = angle (x, y) ;           //   coordonn�es polaires
   t += th ;                          // rotation th
   x = r * cos (t) ;                  // retour en
   y = r * sin (t) ;                  //   coordonn�es cart�siennes
}

float point::abscisse ()
{ return x ;
}
float point::ordonnee ()
{ return y ;
}
float point::rho ()
{ return sqrt (x*x + y*y) ;
}
float point::theta ()    
{ return angle (x, y) ;

}        /********** d�finition des fonctions de service ***********/
/* fonction de calcul de l'angle correspondant aux coordonn�es     */
/*           cart�siennes fournies en argument                     */
/* On choisit une d�termination entre -pi et +pi (0 si x=0)        */

float angle (float x, float y)
{  float a = x ? atan (y/x) : 0 ;
   if (y<0) if (x>=0) return a + pi ;
                 else return a - pi ;
   return a ;
}



