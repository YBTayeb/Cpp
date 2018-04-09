#include <iostream>
using namespace std ;
struct enreg { int a ;      // type enreg defini a un niveau global
               float b ;
             } ;
int main()
{ enreg x ;
  void fct (enreg & y) ;
  x.a = 1 ; x.b = 12.5 ;
  cout << "avant appel fct : " << x.a << " " << x.b << "\n" ;
  fct (x) ;
  cout << "au retour dans main : " <<  x.a << " " << x.b ;
}
void fct (enreg & s)
{ s.a = 0 ; s.b=1 ;
  cout << "dans fct  : " << s.a << " " << s.b << "\n" ;
}
