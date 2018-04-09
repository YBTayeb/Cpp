#include <iostream>
using namespace std ;
class point
{   int x, y ;
  public :
    point (int abs=0, int ord=0)         // constructeur usuel
    { x = abs ; y = ord ;
      cout << "++ point    " << x << " " << y << "\n" ;
    }
    point (const point & p)              // constructeur de recopie
    { x = p.x ; y = p.y ;        
      cout << "CR point    " << x << " " << y << "\n" ;
    }
} ;
class pointcol : public point 
{   char coul ;
  public :
    pointcol (int abs=0, int ord=0, int cl=1) : point (abs, ord) // constr usuel
    { coul = cl ; 
      cout << "++ pointcol " << int(coul) << "\n" ;
    }
    pointcol (const pointcol & p) : point (p)  // constructeur de recopie
                     // il y aura conversion implicite de p dans le type point
    { coul = p.coul ;
      cout << "CR pointcol " << int(coul) << "\n" ;
    }
} ;
void fct (pointcol pc)
{  cout << "*** entree dans fct ***\n" ;
}
int main()
{  void fct (pointcol) ;
   pointcol a (2,3,4) ;
   fct (a) ;                // appel de fct, à qui on transmet a par valeur
}
