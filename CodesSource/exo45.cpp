#include <iostream>
using namespace std ;
main()
{
   char * adr = "bonjour" ;
   int i ;
   for (i=0 ; i<3 ; i++) cout << *(adr+i) ;
   cout << "\n" ;
   i = 0 ;
   while (adr[i]) cout <<  *(adr+i++) ;
}



#include <iostream>
using namespace std ;
main()
{
   char * adr = "bonjour" ;
   char * adb ;
   for (adb=adr ; adb<adr+3 ; adb++) cout << *adb ;
   cout << "\n" ;
   adb = adr ;
   while (*adb) cout <<  *(adb++) ;
}