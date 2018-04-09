#include <iostream>
using namespace std ;
class point
{ 
   int x, y ;
 public :
   point (int abs=0, int ord=0)        // constructeur 0, 1 ou 2 arguments
     { x = abs ; y = ord ;
       cout << "++ construction point " << x << " " << y
            << " en " << this << "\n" ;
     }
  
 point (const point & p)               // constructeur de recopie
     { x = p.x ; y = p.y ;
       cout << ":: constr. recopie de " << &p << " en " << this << "\n" ;
     }
} ;

void fct (point p)                     // fonction simple
{  cout << "** appel fct " << "\n" ;
}
int main()
{  void fct (point) ;
   point a(3,4) ;
   a = point (12) ;  // appel explicite constructeur
   a = 12 ;          // appel implicite
   fct(4) ;
}
