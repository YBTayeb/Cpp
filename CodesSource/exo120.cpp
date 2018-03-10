const int LGMAX = 20 ;
#include <sctdlib>                        // pour exit
#include <fstream>
#include <iomanip>
#include <iostream>  
using namespace std ;
main()
{
   char nomfich [LGMAX+1] ;
   int n ;
   cout << "nom du fichier à créer : " ;
   cin >> setw (LGMAX) >> nomfich ;
   ofstream sortie (nomfich, ios::out) ;
   if (!sortie) { cout << "création impossible \n" ;
                  exit (1) ;
                }


   do
      { cout << "donnez un entier : " ;
        cin >> n ;
        if (n) sortie.write ((char *)&n, sizeof(int) ) ;
      }
   while (n && sortie) ;

   sortie.close () ;
}
