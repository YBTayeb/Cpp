#include <iostream>
using namespace std ;
class point 
{
    int x, y ;
  public :
    point (int abs=0, int ord=0)     // constructeur (0, 1 ou 2 arguments)
      { x=abs ; y =ord ;
        cout << "++ Constr. point : " << x << " " << y << "\n" ;
      }

    ~point ()
    { cout << "-- Destr. point : " << x << " " << y << "\n" ;
    }
} ;



int main()
{  int n = 3 ;
   point courbe[5] = { 7, n, 2*n+5 } ;
   cout << "*** fin programme ***\n" ;
} 
