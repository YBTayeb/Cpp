#include <iostream>
using namespace std ;
class point
{
   int x, y ;
 public :
   point (int abs=0, int ord=0)     // constructeur 0, 1 ou 2 arguments
     { x = abs ; y = ord ;
       cout << "++ construction point " << x << " " << y
            << " en " << this << "\n" ;
     }
 
  point & operator = (const point & p) // surdéf. affectation point -> point
     { x = p.x ; y = p.y ;
       cout << "== affectation point --> point de " << &p << " en " << this ;
       return * this ;
     }

   point & operator = (const int n)    // surdéf. affectation int -> point
     { x = n ; y = 0 ;
       cout << "== affectation int   --> point de " << x << " " << y
            << " en " << this << "\n" ;
       return * this ;
     }
} ;

main()
{  point a(3,4) ;
   a = 12 ;
}
