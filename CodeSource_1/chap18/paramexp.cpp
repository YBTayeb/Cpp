#include <iostream>
using namespace std ;
template <class T, int n> class tableau
{  T tab [n] ;
  public :
   tableau () { cout << "construction tableau \n" ; }
   T & operator [] (int i)
    { return tab[i] ;
    }
} ;

class point
{  int x, y ;
  public :
   point (int abs=1, int ord=1 )   // ici init par défaut à 1
     { x=abs ; y=ord ;
       cout << "constr point " << x << " " << y << "\n" ;
     }
   void affiche () { cout << "Coordonnees : " << x << " " << y << "\n" ; }
} ;

int main()
{  tableau <int,4> ti ;
   int i ; for (i=0 ; i<4 ; i++) ti[i] = i ;
   cout << "ti : " ;
   for (i=0 ; i<4 ; i++) cout << ti[i] << " " ;
   cout << "\n" ;
   tableau <point, 3> tp ;
   for (i=0 ; i<3 ; i++) tp[i].affiche() ;
}    
