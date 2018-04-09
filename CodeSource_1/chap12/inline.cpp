#include <iostream>
using namespace std ;
class point
{  int x, y ;
 public :
   point () { x = 0 ; y = 0 ; }                      // constructeur 1 "en ligne"
   point (int abs) { x = y = abs ; }                 // constructeur 2 "en ligne"
   point (int abs, int ord) { x = abs ; y = ord ; }  // constructeur 3 "en ligne"
   void affiche (char * = "") ;
} ;
void point::affiche (char * message)                 // fonction affiche 
{  cout << message << "Je suis en : " << x << " " << y << "\n" ; 
}

int main()
{
   point a ;                      // "appel" constructeur 1
   a.affiche () ;               
   point b (5) ;                  // "appel" constructeur 2
   b.affiche ("Point b - ") ;  
   point c (3, 12) ;              // "appel" constructeur 3
   c.affiche ("Hello ---- ") ; 
}
