#include <cstddef>               // pour size_t
#include <iostream> 
using namespace std ;
class point
{   static int npt ;              // nombre total de points
    static int nptd ;             // nombre de points "dynamiques"
    int x, y ;
  public :
    point (int abs=0, int ord=0)                       // constructeur
        { x=abs ; y=ord ;
          npt++ ;
        }
    ~point ()                                          // destructeur
        { npt-- ;
        }
    void * operator new (size_t sz)                    // new surdéfini
    { nptd++ ;
      return ::new char[sz] ;                          // appelle new prédéfini
    }
    void operator delete (void * dp)
     { nptd-- ;
       ::delete (dp) ;                                 // appelle delete prédéfini
     }
    static int npt_tot ()
     { return npt ;
     }
    static int npt_dyn ()
     { return nptd ;
     }
} ;

int point::npt = 0 ;     // initialisation des membres statiques de point
int point::nptd = 0 ;


#include "point.h"
#include <iostream> 
using namespace std ;
main()
{
   point * ad1, * ad2 ;
   point a(3,5) ;
   cout << "A : " << point::npt_tot () << " " << point::npt_dyn () << "\n" ;
   ad1 = new point (1,3) ;
   point b ;
   cout << "B : " << point::npt_tot () << " " << point::npt_dyn () << "\n" ;
   ad2 = new point (2,0) ;
   delete ad1 ;
   cout << "C : " << point::npt_tot () << " " << point::npt_dyn () << "\n" ;
   point c(2) ;
   delete ad2 ;
   cout << "D : " << point::npt_tot () << " " <<  point::npt_dyn () << "\n" ;
}
