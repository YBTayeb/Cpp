#include <iostream> 
#include <set>       // pour la classe set 
using namespace std ;
main()
{  set<char> ens ;     // voir note  
   char mot [81] ;
   cout << "donnez un mot : " ;
   cin >> mot ;
   int i ;
   for (i=0 ; i<strlen(mot) ; i++) ens.insert(mot[i]) ;
   cout << "il contient " << ens.size() << " caracteres differents\n" ;
   if (ens.count('e')) cout << "le caractere e est present\n" ;
                  else cout << "le caractere e n'est pas present\n" ; 
}

