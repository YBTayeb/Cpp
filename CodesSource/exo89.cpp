class vecteur3d
{  float v [3] ;
  public :
   vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)
     { v[0] = c1 ; v[1] = c2 ; v[2] = c3 ;
     }
   float   operator [] (int) const ; // [] pour un vecteur constant   
   float & operator [] (int) ;       // [] pour un vecteur non constant
} ;
     
         /******** operator [] pour un objet non constant *******/
float & vecteur3d::operator [] (int i)
{  if ( (i<0) || (i>2) ) i = 0 ;     // pour éviter un "débordement"
   return v[i] ;
}
         /********** operator [] pour un objet constant *********/
float   vecteur3d::operator [] (int i) const 
{  if ( (i<0) || (i>2) ) i = 0 ;     // pour éviter un "débordement"
   return v[i] ;
}


#include "vecteur3d.h"
#include <iostream>  
using namespace std ;
main()
{  int i ;
   vecteur3d v1 (3,4,5) ; 
   const vecteur3d v2 (1,2,3) ;
   cout << "V1 : " ;
   for (i=0 ; i<3 ; i++) cout << v1[i] << " " ;
   cout << "\nV2 : " ;
   for (i=0 ; i<3 ; i++) cout << v2[i] << " " ;
   for (i=0 ; i<3 ; i++) v1[i] = i ;
   cout << "\nV1 : " ;
   for (i=0 ; i<3 ; i++) cout << v1[i] << " " ;
//      v2[1] = 3 ;  est bien rejeté à la compilation
}
