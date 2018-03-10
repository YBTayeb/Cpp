class vecteur3d
{  float x, y, z ;
  public :
   vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)
     { x = c1 ; y = c2 ; z = c3 ;
     }
   int operator == (vecteur3d) ;        
   int operator != (vecteur3d) ;
} ;

int vecteur3d::operator == (vecteur3d v)
{  if ( (v.x == x) && (v.y == y) && (v.z ==z) ) return 1 ;
					   else return 0 ;
}
int vecteur3d::operator != (vecteur3d v)
{  return ! ( (*this) == v ) ;
}





class vecteur3d
{  float x, y, z ;
  public :
   vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)
     { x = c1 ; y = c2 ; z = c3 ;
     }
   friend int operator == (vecteur3d, vecteur3d) ;        
   friend int operator != (vecteur3d, vecteur3d) ;
} ;
int operator == (vecteur3d v, vecteur3d w)
{  if ( (v.x == w.x) && (v.y == w.y) && (v.z == w.z) ) return 1 ;
                                                  else return 0 ;
}
int operator != (vecteur3d v, vecteur3d w)
{  return ! ( v == w ) ;
}


#include "vecteur3d.h"
#include <iostream>  
using namespace std ;
main()
{  vecteur3d v1 (3,4,5), v2 (4,5,6), v3 (3,4,5) ;
   cout << "v1==v2 : " << (v1==v2) << " v1!=v2 : " << (v1!=v2) << "\n" ;
   cout << "v1==v3 : " << (v1==v3) << " v1!=v3 : " << (v1!=v3) << "\n" ;
}				         
