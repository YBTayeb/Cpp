#include <iostream>
using namespace std ;
struct point
   { char c ;
     int x, y ;
   } ;
point sym (point * adp)
{  point res ;
   res.c = adp->c ;
   res.x = - adp->x ;
   res.y = - adp->y ;
   return res ;
}

main()
{  point sym (point *) ;
   point p1 = {'P', 5, 8} ;
   point p2 ;
   p2 = sym (&p1) ;
   cout << p1.c << " " << p1.x << " " << p1.y << "\n" ;
   cout << p2.c << " " << p2.x << " " << p2.y << "\n" ;
}