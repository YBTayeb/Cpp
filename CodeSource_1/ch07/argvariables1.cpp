#include <iostream>
#include <cstdarg>       // pour va_arg et va_list
using namespace std ;

void essai (int par1, char  par2, ...)
{  va_list adpar ;
   int parv ;
   cout << "premier parametre : " << par1 << "\n" ;
   cout << "second parametre  : " << par2 << "\n" ;
   va_start (adpar, par2) ;
   while ( (parv = va_arg (adpar, int) ) != -1)
       cout << "argument variable : " << parv << "\n" ;
}

main()
{  cout << "premier essai\n" ;
   essai (125, ’a’, 15, 30, 40, -1) ;
   cout << "deuxieme essai\n" ;
   essai (6264, ’S’, -1) ;
}
