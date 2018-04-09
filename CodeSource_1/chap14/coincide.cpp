#include <iostream>
using namespace std ;
class point
   { int x, y ;
   public :
     point (int abs=0, int ord=0)         // un constructeur ("inline")
             { x=abs ; y=ord ; } 
        // déclaration fonction amie (indépendante) nommée coincide
     friend int coincide (const point &, const point &) ;
   } ;
int coincide (const point &p, const point &q)           // définition de coincide
{   return ((p.x == q.x) && (p.y == q.y)) ;
}
int main()                                    // programme d’essai
{  point a(1,0), b(1), c ; 
   if (coincide (a,b)) cout << "a coincide avec b \n" ;
                  else cout << "a et b sont differents \n" ;
   if (coincide (a,c)) cout << "a coincide avec c \n" ;
                  else cout << "a et c sont differents \n" ; 
}