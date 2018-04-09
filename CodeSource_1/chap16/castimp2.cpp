#include <iostream>
using namespace std ;
class point
{  int x, y ;
 public :
   point (int abs=0, int ord=0)          // constructeur 0, 1 ou 2 arguments
     { x = abs ; y = ord ;
       cout << "++ construction point : " << x << " " << y << "\n" ;
     }
   point (const point & p)               // constructeur de recopie
     { cout << ":: appel constructeur de recopie \n" ;
       x = p.x ; y = p.y ;
     }
   operator int() const                  // "cast" point --> int
     { cout << "== appel int() pour le point " << x << " " << y << "\n" ;
       return x ;
     }
} ;
void fct (int n)                         // fonction 
{  cout << "** appel fct avec argument : " << n << "\n" ;
}
int main()
{  void fct (int) ; 
   point a(3,4) ;
   fct (6) ;                // appel normal de fct
   fct (a) ;                // appel avec conversion implicite de a en int
}
