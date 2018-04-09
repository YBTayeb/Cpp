#include <iostream>
using namespace std ;
class point
{
   int x, y ;
 public :
   point (int abs, int ord)          // constructeur ("inline")
      { x = abs ; y = ord ;
        cout << "++ Construction d'un point : " << x << " " << y << "\n" ;
      }
   ~point ()                         // destructeur ("inline")
      { cout << "-- Destruction du point    : " << x << " " << y << "\n" ; 
      }
} ;
point a(1,1) ;                       // un objet statique de classe point

int main()
{
   cout << "****** Debut main *****\n" ;
   point b(10,10) ;                  // un objet automatique de classe point
   int i ;
   for (i=1 ; i<=3 ; i++)
      {  cout << "** Boucle tour numero " << i << "\n" ;
         point b(i,2*i) ;            // objets créés dans un bloc
      }
   cout << "****** Fin main ******\n" ;
}
