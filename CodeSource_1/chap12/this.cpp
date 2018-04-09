#include <iostream>
using namespace std ;
class point                     // Une classe point contenant seulement :
{  int x, y ;
 public :
   point (int abs=0, int ord=0)     // Un constructeur ("inline")
       { x=abs; y=ord ; }
   void affiche () ;                // Une fonction affiche 
} ;
void point::affiche ()
{  cout << "Adresse : " << this << " - Coordonnees " << x << " " << y << "\n" ;
}
int main()                          // Un petit programme d’essai
{  point a(5), b(3,15) ;
   a.affiche ();
   b.affiche ();
} 