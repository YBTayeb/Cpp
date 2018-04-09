#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
const int LGMAX_NOM_FICH = 20 ;
int main()
{ 
  char nomfich [LGMAX_NOM_FICH + 1] ;
  int n, num ;
  cout << "nom du fichier a consulter : " ;
  cin >> setw (LGMAX_NOM_FICH) >> nomfich ;
  ifstream entree (nomfich, ios::in|ios::binary) ;   // ou ios::in
  if (!entree) { cout << "Ouverture impossible\n" ;
                 exit (-1) ;
               }
  do
    { cout << "Numero de l'entier recherche : " ;
      cin >> num ;
      if (num)
         { entree.seekg (sizeof(int) * (num-1) , ios::beg ) ;
           entree.read ( (char *) &n, sizeof(int) ) ;
           if (entree) cout << "-- Valeur : " << n << "\n" ;
             else {  cout << "-- Erreur\n" ;
                     entree.clear () ;
                  }
         }
    }
  while (num) ;
  entree.close () ;
}
