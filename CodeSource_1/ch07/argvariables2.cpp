#include <iostream>
#include <cstdarg>
using namespace std ;
void essai (int, ...) ;
int main ()
{  cout << "premier essai\n" ;
   essai (3, 15, 30, 40) ;
   cout << "\ndeuxieme essai\n" ;
   essai (0) ;
}
void essai (int nbpar, ...)
{  va_list adpar ;
   int parv, i ;
   cout << "nombre de valeurs : " << nbpar << "\n" ;
   va_start (adpar, nbpar) ;
   for (i=1 ; i<=nbpar ; i++)
     {  parv = va_arg (adpar, int) ;
        cout << "argument variable : " << parv << "\n" ;
     }
}