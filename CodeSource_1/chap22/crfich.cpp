#include <cstdlib>                    // pour exit
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
const int LGMAX = 20 ;
int main()
{  char nomfich [LGMAX+1] ; int n ;
   cout << "nom du fichier a creer : " ;
   cin >> setw (LGMAX) >> nomfich ;
   ofstream sortie (nomfich, ios::out|ios::binary) ;    // ou ios::out
   if (!sortie) { cout << "creation impossible \n" ; exit (1) ;
                }
   do { cout << "donnez un entier : " ;
        cin >> n ;
        if (n) sortie.write ((char *)&n, sizeof(int) ) ;
      }
   while (n && (sortie)) ;
   sortie.close () ;
}
