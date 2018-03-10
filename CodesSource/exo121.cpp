const int LGMAX = 20 ;
#include <cstdlib>                        // pour exit
#include <fstream>
#include <iomanip>
#include <iostream>  
using namespace std ;
main()
{
   char nomfich [LGMAX+1] ;
   int n ;
   cout << "nom du fichier à lister : " ;
   cin >> setw (LGMAX) >> nomfich ;
   ifstream entree (nomfich, ios::in) ;
   if (!entree) { cout << "ouverture impossible \n" ;
                  exit (1) ;
                }
   while ( entree.read ( (char*)&n, sizeof(int) ) )
        cout << n << "\n" ;

   entree.close () ;
}
