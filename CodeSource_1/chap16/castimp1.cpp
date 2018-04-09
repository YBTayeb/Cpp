#include <iostream>
using namespace std ;
class point
{  int x, y ;
 public :
   point (int abs=0, int ord=0)          // constructeur 0, 1 ou 2 arguments
     { x = abs ; y = ord ;
       cout << "++ construction point : " << x << " " << y << "\n" ;
     }
   operator int()  const                 // "cast" point --> int
     { cout << "== appel int() pour le point " << x << " " << y << "\n" ;
       return x ;
     }
} ;
int main()
{  point a(3,4), b(5,7) ;
   int n1, n2 ;
   n1 = int(a) ;  // appel explicite de int ()
                  // on peut aussi écrire :  n1 = (int) a  ou n1 = static_cast<int> (a)
   cout << "n1 = " << n1 << "\n" ; 
   n2 = b ;      // appel implicite de int()
   cout << "n2 = " << n2 << "\n" ;
}
