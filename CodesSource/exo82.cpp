      /*         fichier vect3D.H        */
      /* déclaration de la classe vecteur3d */
class vecteur3d
{   float x, y, z ;

  public :
    friend int coincide (const vecteur3d &, const vecteur3d &) ;
    vecteur3d (float c1=0, float c2=0, float c3=0)
       {  x = c1 ; y = c2 ; z = c3 ;
       }
} ;


#include "vect3d.h"          // nécessaire pour compiler coincide
int coincide (const vecteur3d & v1, const vecteur3d & v2)
{   if ( (v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z) )
     	     return 1 ;
     else return 0 ;
}
