#include <iostream>
using namespace std ;
const int NMOIS = 12 ;
struct enreg
{  int stock ;
   float prix ;
   int ventes [NMOIS] ;
} ;
void raz (enreg & s)
{ s.stock = 0 ;
  for (int i=0 ; i<NMOIS ; i++)
    s.ventes[i] = 0 ;
  return ;
}
void affiche (enreg  s)   // transmission par valeur ici
{ cout << "stock : " << s.stock << "\n" ;
  cout << "prix :  " << s.prix << "\n" ;
  cout << "ventes : " ;
  for (int i = 0 ; i<NMOIS ; i++)  cout << s.ventes[i] << " " ;
  cout << "\n" ;
}

main()
{ void raz (enreg &) ;
  enreg e = {12, 5.25, {12, 23, 4, 8, 4, 9, 5, 2, 7, 2, 8, 7} } ;
  cout << "contenu avant raz :\n" ;
  affiche (e) ;
  raz (e) ;
  cout << "contenu apres raz :\n" ;
  affiche (e) ;
}