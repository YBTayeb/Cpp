#include <iostream>
using namespace std ;
class point
{  int x, y ;
 public :
   point () ;                    // constructeur 1 (sans argument)
   point (int) ;                 // constructeur 2 (un argument)
   point (int, int) ;            // constructeur 3 (deux arguments)
   void affiche (char * = "") ;  // fonction affiche (un argument par défaut)
} ;
point::point ()                         // constructeur 1
{  x = 0 ; y = 0 ; 
}
point::point (int abs)                  // constructeur 2
{  x = y = abs ; 
}      
point::point (int abs, int ord)         // constructeur 3
{  x = abs ; y = ord ; 
}
void point::affiche (char * message)    // fonction affiche 
{  cout << message << "Je suis en : " << x << " " << y << "\n" ; 
}

int main()
{  point a ;                      // appel constructeur 1
   a.affiche () ;               
   point b (5) ;                  // appel constructeur 2
   b.affiche ("Point b - ") ;  
   point c (3, 12) ;              // appel constructeur 3
   c.affiche ("Hello ---- ") ; 
}
