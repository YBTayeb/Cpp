#include <iostream>
using namespace std ;

     // le patron de fonctions min
template <class T> T min (T a, T b)
{  if (a < b) return a ;
         else return b ;
}

    // la classe vect
class vect
{  int x, y ;
  public :
   vect (int abs=0, int ord=0) { x=abs ; y=ord; }
   void affiche () { cout << x << " " << y ; }
   friend int operator < (vect, vect) ;
} ;
int operator < (vect a, vect b)
{  return a.x*a.x + a.y*a.y < b.x*b.x + b.y*b.y ;
}

    // un exemple d'utilisation de min
int main()
{  vect u (3, 2), v (4, 1), w ;
   w = min (u, v) ;
   cout << "min (u, v) = " ; w.affiche() ;
}    
