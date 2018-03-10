class vecteur3d
{
   float v [3] ;
  public :
   vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)
     { v[0] = c1 ; v[1] = c2 ; v[2] = c3 ;
     }
   float & operator [] ( int) ;        
} ;

float & vecteur3d::operator [] (int i)
{  if ( (i<0) || (i>2) ) i = 0 ;     // pour éviter un "débordement"
   return v[i] ;
}



#include "vecteur3d.h"
#include <iostream>  
using namespace std ;

main()
{
  vecteur3d v1 (3,4,5) ;
   int i ; 
   cout << "v1 = " ;
   for (i=0 ; i<3 ; i++) cout << v1[i] << " " ;
   for (i=0 ; i<3 ; i++) v1[i] = i ;
   cout << "\nv1 = "  ;
   for (i=0 ; i<3 ; i++) cout << v1[i] << " " ;
}				         
