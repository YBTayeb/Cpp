#include <iostream>
using namespace std ;
class point
{   int x, y ;
  public :
    point (int abs=0, int ord=0)  { x=abs ; y=ord ; } 
    friend int coincide (const point &, const point &) ;
} ;
int coincide (const point & p, const point & q)          
{  return  ((p.x == q.x) && (p.y == q.y)) ;
}
class pointcol : public point
{   short couleur ;
  public :
    pointcol (int abs=0, int ord=0, short cl=1) : point (abs, ord)
    { couleur = cl ; 
    }
} ;

int main()                                    // programme d’essai
{  pointcol a(2,5,3), b(2,5,9), c ; 
   if (coincide (a,b)) cout << "a coincide avec b \n" ;
                  else cout << "a et b sont différents \n" ;
   if (coincide (a,c)) cout << "a coincide avec c \n" ;
                  else cout << "a et c sont differents \n" ; 
}
