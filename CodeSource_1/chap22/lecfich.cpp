#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
const int LGMAX = 20 ;

int main()
{
   char nomfich [LGMAX+1] ;
   int n ;
   cout << "nom du fichier a lister : " ;
   cin >> setw (LGMAX) >> nomfich ;
   ifstream entree (nomfich, ios::in|ios::binary) ;    // ou ios::in
   if (!entree) { cout << "ouverture impossible \n" ;
                  exit (-1) ;
                }
   while ( entree.read ( (char*)&n, sizeof(int) ) )
        cout << n << "\n" ;
   entree.close () ;
}
