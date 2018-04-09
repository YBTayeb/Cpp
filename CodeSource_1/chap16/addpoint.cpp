#include <iostream>
using namespace std ;
class point
{  int x, y ;
 public :
   point (int abs=0, int ord=0)         // constructeur 0, 1 ou 2 arguments
   { x = abs ; y = ord ;
     cout << "++ construction point : " << x << " " << y << "\n" ;
   }
   friend point operator + (point, point) ;      // point + point --> point
   void affiche ()
   { cout << "Coordonnees : " << x << " " << y << "\n" ;
   }
} ;
point operator+ (point a, point b)
{  point r ;
   r.x = a.x + b.x ; r.y = a.y + b.y ;
   return r ;
}
int main()
{
   point a, b(9,4) ;
   a = b + 5 ; a.affiche() ;
   a = 2 + b ; b.affiche() ;
}
