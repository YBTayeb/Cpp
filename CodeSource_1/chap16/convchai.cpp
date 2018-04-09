#include <iostream>
using namespace std ;
class point
{  int x, y ;
 public :
   point (int abs=0, int ord=0)          // constructeur 0, 1 ou 2 arguments
     { x = abs ; y = ord ;
       cout << "++ construction point : " << x << " " << y << "\n" ;
     }
   operator int() const                  // "cast" point --> int
     { cout << "== appel int() pour le point " << x << " " << y << "\n" ;
       return x ;
     }
} ;
void fct (double v) 
{  cout << "** appel fct avec argument : " << v << "\n" ;
}

int main()
{  point a(3,4) ;
   int n1 ;
   double z1, z2 ;
   n1 = a + 3.85 ; cout << "n1 = " << n1 << "\n" ;
   z1 = a + 3.85 ; cout << "z1 = " << z1 << "\n" ;
   z2 = a        ; cout << "z2 = " << z2 << "\n" ; 
   fct (a) ;   
}
