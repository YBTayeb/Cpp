#include <iostream>
using namespace std ;

void fcompte (void)
{
   static int i ;     // il est inutile, mais pas interdit, d'�crire i=0
   i++ ;
   cout << "appel num�ro " << i << "\n"  ;
}

     /* petit programme d'essai de fcompte */
main()
{  void fcompte (void) ;
   int i ;
   for (i=0 ; i<3 ; i++) fcompte () ;
}