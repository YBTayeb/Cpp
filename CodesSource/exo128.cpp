{
   T x, y ;    // coordonnees
   U coul ;    // couleur
  public :
   pointcol (T abs, T ord, U cl)
     { x = abs ; y = ord ; coul = cl ;
     }
   void affiche ()
     { cout << "point colore - coordonnees " << x << " " << y
            << " couleur " << coul << "\n" ;
     }
} ;



#include "pointcol.h"
#include <iostream> 
using namespace std ;

main()
{ pointcol <int, short int > p1 (5, 5, 2) ;  p1.affiche () ;
  pointcol <float, int> p2 (4, 6, 2) ; p2.affiche () ;
  pointcol <double, unsigned short> p3 (1, 5, 2) ; p3.affiche () ;
}
