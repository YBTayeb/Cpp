#include <iostream>
using namespace std ;
void fct() ;
int main ()
{  int n ;
   for ( n=1 ; n<=5 ; n++)
      fct() ;
}
void fct()
{  static int i ;
   i++ ;
   cout << "appel numéro : " << i << "\n" ;
}
