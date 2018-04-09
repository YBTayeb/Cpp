#include <iostream>
#include <utility>          // pour les générateurs d'opérateurs 
using namespace std ;      
class point
{ int x, y ;
 public :
  point(int abs=0, int ord=0) { x=abs ; y=ord ; }
  friend int operator== (point, point) ;
  friend int operator< (point, point) ;
} ;

int operator== (point a, point b)
{ return ( (a.x == b.x) && (a.y == b.y) ) ;
}
int operator<(point a, point b)
{ return ( (a.x < b.x) && (a.y < b.y) ) ;
}
int main()
{ point a(1, 2), b(3, 1) ;
  cout << "a == b : " << (a==b) << "    a != b : " << (a!=b) << "\n" ;
  cout << "a < b  : " << (a<b)  << "    a <= b : " << (a<=b) << "\n" ;
  char c ; cin >> c ;
}
