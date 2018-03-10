#include <iostream>  
using namespace std ;
class point
{
   int x, y ;
 public :
   point (int abs, int ord)              // constructeur 2 arguments
     { x = abs ; y = ord ;
     }
   operator int()                        // "cast" point --> int
     { cout << "** appel int() pour le point " << x << " " << y << "\n" ;
       return x ;
     }
} ;
void fct (double v) 
{  cout << "$$ appel fct avec argument : " << v << "\n" ;
}

main()
{  point a(1,4) ;
   int n1 ;
   double z1, z2 ;
   n1 = a + 1.75 ;                   // instruction 1
   cout << "n1 = " << n1 << "\n" ;
   z1 = a + 1.75 ;                   // instruction 2
   cout << "z1 = " << z1 << "\n" ;
   z2 = a ;                          // instruction 3
   cout << "z2 = " << z2 << "\n" ; 
   fct (a) ;                         // instruction 4
}
