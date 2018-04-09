#include <iostream>
using namespace std ;
class point                     // Une classe point contenant seulement :
{  int x, y ;
 public :
   point (int abs=0, int ord=0)       // un constructeur ("en ligne")
       { x=abs; y=ord ; }
   bool coincide (point &) ;           // une fonction membre : coincide
} ;
bool point::coincide (point & pt)
{  return ( (pt.x == x) && (pt.y == y) ) ;
}

int main()                              // Un petit programme d’essai
{  point a, b(1), c(1,0) ;
   cout << "a et b : " << a.coincide(b) << " ou " << b.coincide(a) << "\n" ;
   cout << "b et c : " << b.coincide(c) << " ou " << c.coincide(b) << "\n" ;
}