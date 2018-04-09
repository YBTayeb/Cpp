#include <iostream>
using namespace std ;
class point
{  protected :
     int x, y ;
   public :
     point (int abs=0, int ord=0) { x=abs ; y=ord ;}
     point & operator = (const point & a)
      { x = a.x ; y = a.y ;
        cout << "operateur = de point \n" ;
        return * this ;
      }
} ;
class pointcol : public point
{  protected :
     int coul ;
   public :
     pointcol (int abs=0, int ord=0, int cl=1) : point (abs, ord) { coul=cl ; }
     pointcol & operator = (const pointcol & b)
      { coul = b.coul ;
        cout << "operateur = de pointcol\n" ;
        return * this ;
      }
     void affiche () const
      { cout << "pointcol : " << x << " " << y << " " << coul << "\n" ;
      }
} ;
int main()
{ pointcol p(1, 3, 10) , q(4, 9, 20) ;
  cout << "p       = " ; p.affiche () ;
  cout << "q avant = " ; q.affiche () ;
  q = p ;
  cout << "q apres = " ; q.affiche () ;
}