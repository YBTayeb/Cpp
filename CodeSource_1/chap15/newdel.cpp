#include <iostream>
#include <stddef.h>               // pour size_t
using namespace std ;
class point
{
    static int npt ;              // nombre total de points
    static int npt_dyn ;          // nombre de points "dynamiques" 
    int x, y ;
  public :
    point (int abs=0, int ord=0)                        // constructeur
        { x=abs ; y=ord ;
          npt++ ;
          cout << "++ nombre total de points : " << npt << "\n" ;
        }
    ~point ()                                           // destructeur
        { npt-- ;
          cout << "-- nombre total de points : " << npt << "\n" ;
        }
    
    void * operator new (size_t sz)                     // new surdéfini
    { npt_dyn++ ;  
      cout << "     il y a " << npt_dyn << " points dynamiques sur un \n" ;
      return ::new char[sz] ;
    }
   
    void operator delete (void * dp)
    { npt_dyn-- ;
      cout << "     il y a " << npt_dyn << " points dynamiques sur un \n" ; 
      ::delete (dp) ;
    }
} ;

int point::npt = 0 ;       // initialisation membre statique npt
int point::npt_dyn = 0 ;   // initialisation membre statique npt_dyn

int main()
{
   point * ad1, * ad2 ;
   point a(3,5) ;
   ad1 = new point (1,3) ;
   point b ;
   ad2 = new point (2,0) ;
   delete ad1 ;
   point c(2) ;
   delete ad2 ;
}
