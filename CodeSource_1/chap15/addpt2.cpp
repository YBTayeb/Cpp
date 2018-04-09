#include <iostream>
using namespace std ;
class point
{  int x, y ;
  public :
   point (int abs=0, int ord=0) { x=abs ; y=ord ;}  // constructeur 
   point operator + (point) const ; 
   void affiche () const
   { cout << "coordonnees : " << x << " " << y << "\n" ; } 
} ;
point point::operator + (point a) const
{  point p ;
   p.x = x + a.x ; p.y = y + a.y ;
   return p ;
}
int main()
{  point a(1,2) ; a.affiche() ;
   point b(2,5) ; b.affiche() ;
   point c ;      
   c = a+b ;      c.affiche() ; 
   c = a+b+c ;    c.affiche() ; 
} 