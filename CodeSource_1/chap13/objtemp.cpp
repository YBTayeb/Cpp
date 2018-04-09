#include <iostream>
using namespace std ;
class point
{
   int x, y ;
 public :
   point (int abs, int ord)          // constructeur ("inline")
      { x = abs ; y = ord ;
        cout << "++ Constr. point " << x << " " << y 
             << " a l'adresse : " << this << "\n" ;
      }
   ~point ()                         // destructeur ("inline")
      { cout << "-- Destr.  point " << x << " " << y 
             << " a l'adresse : " << this << "\n" ; 
      }
} ;

int main()
{
   point a(0,0) ;                    // un objet automatique de classe point
   a = point (1, 2) ;                // un objet temporaire
   a = point (3, 5) ;                // un autre objet temporaire
   cout << "****** Fin main ******\n" ;
}
