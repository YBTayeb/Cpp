#include <iostream>
#include <string.h>
#include <set>
using namespace std ;
main()
{  set<char> ens ;   // voir note  
   char mot [81] ;
   cout << "donnez un mot : " ;
   cin >> mot ;
   int i ;
   for (i=0 ; i<strlen(mot) ; i++) ens.insert(mot[i]) ;
   cout << "il contient " << ens.size() << " caracteres differents"
        << " qui sont :\n" ;
   set<char>::iterator ie ;    // iterateur sur un ensemble de caracteres
   for (ie=ens.begin() ; ie != ens.end() ; ie++)
      cout << *ie << " " ;
}
