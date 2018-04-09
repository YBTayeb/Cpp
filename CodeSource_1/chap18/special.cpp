#include <iostream>
using namespace std ;
  // creation d'un patron de classe
template <class T> class point
{  T x ; T y ;
  public :
   point (T abs=0, T ord=0)
   {  x = abs ; y = ord ;
   }
   void affiche () ;
} ;
  // definition de la fonction affiche
template <class T> void point<T>::affiche ()
{
  cout << "Coordonnees : " << x << " " << y << "\n" ;
}
  // ajout d'une fonction affiche spécialisee pour les caracteres
void point<char>::affiche ()
{
  cout << "Coordonnees : " << (int)x << " " << (int)y << "\n" ;
}
int main ()
{
   point <int> ai (3, 5) ;        ai.affiche () ;
   point <char> ac ('d', 'y') ;   ac.affiche () ;
   point <double> ad (3.5, 2.3) ; ad.affiche () ;
}
