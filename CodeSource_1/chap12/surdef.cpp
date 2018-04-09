#include <iostream>
using namespace std ;
class point
{  int x, y ;
 public :
   point () ;                // constructeur 1 (sans arguments)
   point (int) ;             // constructeur 2 (un argument)
   point (int, int) ;        // constructeur 3 (deux arguments)
   void affiche () ;         // fonction affiche 1 (sans arguments)
   void affiche (char *) ;   // fonction affiche 2 (un argument chaîne)
} ;
point::point ()                               // constructeur 1
{  x = 0 ; y = 0 ; 
}  
point::point (int abs)                        // constructeur 2
{  x = y = abs ; 
}       
point::point (int abs, int ord)               // constructeur 3
{  x = abs ; y = ord ; 
}
void point::affiche ()                        // fonction affiche 1
{  cout << "Je suis en : " << x << " " << y << "\n" ; 
}
void point::affiche (char * message)          // fonction affiche 2
{  cout << message ; affiche () ; 
}
int main()
{  point a ;                      // appel constructeur 1
   a.affiche () ;                 // appel fonction affiche 1
   point b (5) ;                  // appel constructeur 2
   b.affiche ("Point b - ") ;     // appel fonction affiche 2
   point c (3, 12) ;              // appel constructeur 3
   c.affiche ("Hello ---- ") ;    // appel fonction affiche 2
}e ("Hello ---- ") ;    // appel fonction affiche 2
}
