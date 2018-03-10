#include <iostream>
using namespace std ;

struct point 
{  char c ;
   int x, y ;
} ;
void affiche (point p)
{   cout << "point " << p.c << " de coordonnées "  
         << p.x << " " <<p.y << "\n" ;
}
main()
{   void affiche (point) ;   // déclaration  de affiche 
    point s ;
    s.c = 'A' ;
    s.x = 10 ;
    s.y = 12 ;
    affiche (s) ;
}


#include <iostream>
using namespace std ;
struct point 
{  char c ;
   int x, y ;
} ;
void affiche (point * adp)
{   cout << "point " << adp->c << " de coordonnées " 
         << adp->x << " " << adp->y ;
}
main()
{   void affiche (point *) ;  
    point s ;
    s.c = 'A' ;
    s.x = 10 ;
    s.y = 12 ;
    affiche (&s) ;
}


#include <iostream>
using namespace std ;

struct point 
{  char c ;
   int x, y ;
} ;
void affiche (point & p)
{   cout << "point " << p.c << " de coordonnées " 
         << p.x << " " << p.y ;
}
main()
{   void affiche (point &) ;  
    point s ;
    s.c = 'A' ;
    s.x = 10 ;
    s.y = 12 ;
    affiche (s) ;
}