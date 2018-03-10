#include <iostream> 
using namespace std ;
struct essai
{ int n ;
  float x ;
} ;
void raz (struct essai * ads)
{ ads->n = 0 ;         // ou encore (*ads).n = 0 ;
  ads->x = 0.0 ;       // ou encore (*ads).x = 0.0 ;
}
main()
{ struct essai s ;
  raz (&s) ;
  cout << "valeurs après raz : " << s.n << " " << s.x ;
}



#include <iostream> 
using namespace std ;
struct essai
{ int n ;
  float x ;
} ;

void raz (struct essai & s)
{ s.n = 0 ;         
  s.x = 0.0 ;       
}
main()
{ struct essai s ;
  raz (s) ;                // notez bien s et non &s !
  cout << "valeurs après raz : " << s.n << " " << s.x ;
}