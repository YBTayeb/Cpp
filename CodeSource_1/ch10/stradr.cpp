#include <iostream>
using namespace std ;
struct enreg { int a ;
               float b ;
             } ;
int main()
{ enreg x ;
  void fct (enreg *) ;
  x.a = 1 ; x.b = 12.5 ;
  cout << "avant appel fct : " << x.a << " " << x.b << "\n" ;
  fct (&x) ;
  cout << "au retour dans main : " << x.a << " " <<  x.b << "\n" ;
}
void fct (struct enreg * ads)
{ ads->a = 0 ; ads->b = 1;
  cout << "dans fct  : " << ads->a << " " << ads->b << "\n" ;
}
