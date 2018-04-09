#include <iostream>
using namespace std ;
class point
{  
   int x, y ;
 public :
   point (int abs=0, int ord=0)     // constructeur "usuel"
   { x=abs ; y=ord ; 
      cout << "++ Appel Const. usuel   " << this << " " << x << " " << y << "\n" ;
   }
   point (const point & p)          // constructeur de recopie
   { x=p.x ; y=p.y ;
     cout << "++ Appel Const. recopie " << this << " " << x << " " << y << "\n" ;
   }
   ~point ()
   { cout << "-- Appel Destr.         " << this << " " << x << " " << y << "\n" ;
   }
   point symetrique () ;
} ;

point point::symetrique ()
{ point res ; res.x = -x ; res.y = -y ; return res ;
}

int main()
{   point a(1,3), b ;
    cout << "** avant appel de symetrique\n" ;
    b = a.symetrique () ;
    cout << "** apres appel de symetrique\n" ;
}
