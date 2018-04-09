#include <iostream>
using namespace std ;
class point
{
  int x, y ;
 public :
  point (int abs=0, int ord=0)
    { x=abs ; y=ord ;
      cout << "Constr. point " << x << " " << y << "\n" ; 
    }
} ;
class cercle
{ point centre ; 
  int rayon ;
 public :
  cercle (int , int , int) ;
} ;

cercle::cercle (int abs, int ord, int ray) : centre(abs, ord)
   { rayon = ray ;
     cout << "Constr. cercle " << rayon << "\n" ;
   }

int main()
{  cercle a (1,3,9) ;
}
