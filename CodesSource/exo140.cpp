class er_compos
{ } ;
class er_constr
{ public :
  int num ;
  er_constr (int n) { num = n ; }
} ;
class point
{  int x, y ;
  public :
   point (int abs, int ord)
   { if (abs==ord) throw new er_compos ;
     x=abs ; y=ord ;
   }
   point ()
   { throw new er_constr (0) ;
   }
   point (int abs)
   { throw new er_constr (1);
   }
} ;




#include <iostream> 
using namespace std ;
main()
{
  try
  { // .....
     point b(1, 1) ;  // afficherait : exception creation point : composantes egales
     point () ;       // afficherait : exception creation point : constructeur 0 arg
	point (3) ;      // afficherait : exception creation point : constructeur 1 arg
     // .....
  }
  catch (er_compos e)  
  { cout << "exception creation point : composantes egales\n " ;
    exit (-1) ;  
  }
  catch (er_constr ec)  
  { switch (ec.num)
    { case 1 :  cout << "exception creation point : constructeur 0 arg\n" ;
                break ;
      case 2 :  cout << "exception creation point : constructeur 1 arg\n" ;     
     	           break ;
    }
    exit(-1) ;
  }
}
