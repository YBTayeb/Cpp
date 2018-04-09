#include <iostream>
using namespace std ;
template <class T> class point
{  T x ; T y ;
  public :
   point (T abs=0, T ord=0)  {  x = abs ; y = ord ; }
   void affiche () const
   { cout << "Coordonnees : " << x << " " << y << "\n" ; }
} ;
template <class T> class pointcol : public point <T>
{  T coul ;
  public :
   pointcol (T abs=0, T ord=0, T cl=1) : point <T> (abs, ord) { coul = cl ; }
   void affiche () const
   { point<T>::affiche () ; cout << "couleur : " << coul ; }
} ;
int main ()
{  point <long> p (34, 45) ; p.affiche () ;
   pointcol <short> q (12, 45, 5) ; q.affiche () ;
}
