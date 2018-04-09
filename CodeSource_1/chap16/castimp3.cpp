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

int main()
{  point a(3,4), b(5,7) ;
   int n1, n2 ;
   n1 = a + 3 ;    cout << "n1 = " << n1 << "\n" ;
   n2 = a + b ;    cout << "n2 = " << n2 << "\n" ;

   double z1, z2 ;
   z1 = a + 3 ;    cout << "z1 = " << z1 << "\n" ;
   z2 = a + b ;    cout << "z2 = " << z2 << "\n" ;
}