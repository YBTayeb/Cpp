#include <iostream>
using namespace std ;
  // création d’un patron de classe
template <class T> class point
{  T x ; T y ;
  public :
   point (T abs=0, T ord=0)
   {  x = abs ; y = ord ;
   }
   void affiche () ;
} ;
template <class T> void point<T>::affiche ()
{  cout << "Coordonnees : " << x << " " << y << "\n" ;}
int main ()
{  point <int> ai (3, 5) ;        ai.affiche () ;
   point <char> ac (’d’, ’y’) ;   ac.affiche () ;
   point <double> ad (3.5, 2.3) ; ad.affiche () ;
}
