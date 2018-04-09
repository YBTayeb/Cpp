#include <iostream>
using namespace std ;
class point
{  int x, y ;
 public :
   point (int abs, int ord)         // constructeur
      { x=abs ; y=ord ; 
        cout << "++ Appel Constructeur \n" ;
      }   
   ~point ()                        // destructeur (en fait, inutile ici)
      { cout << "-- Appel Destructeur \n" ;
      } 
} ;
void fct (point *) ;             // prototype fonction fct
int main()
{  point * adr ;
   cout << "** Debut main \n" ;
   adr = new point (3,7) ;          // création dynamique d’un objet
   fct (adr) ;
   cout << "** Fin main \n" ;
}
void fct (point * adp)
{  cout << "** Debut fct \n" ;
   delete adp ;                     // destruction de cet objet
   cout << "** Fin fct \n" ;
}
