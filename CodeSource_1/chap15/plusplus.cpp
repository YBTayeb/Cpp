#include <iostream>
using namespace std ;
class point
{ int x, y ;
 public :
  point (int abs=0, int ord=0) { x=abs ; y=ord ; }
  point  operator ++ ()         // notation préfixée
    { x++ ; y++ ; return *this ;
    }
  point  operator ++ (int n)    // notation postfixée
    { point p = *this ;
      x++ ; y++ ;
      return p ;
    }
  void affiche () const
  { cout << x << " " << y << "\n" ; }
} ;
int main()
{ point a1 (2, 5), a2(2, 5), b ;
  b = ++a1 ; cout << "a1 : " ; a1.affiche () ;   // affiche    a1 : 3 6
             cout << "b  : " ; b.affiche () ;    // affiche    b  : 3 6
  b = a2++ ; cout << "a2 : " ; a2.affiche () ;   // affiche    a2 : 3 6
             cout << "b  : " ; b.affiche () ;    // affiche    b  : 2 5
}