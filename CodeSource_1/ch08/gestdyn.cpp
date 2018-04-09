#include <iostream>
using namespace std ;
int main()
{ int *adi, *adibis ;
  int nb ;
  float * adf ;

  cout << "combien de valeurs : " ;
  cin >> nb ;
    // allocation d’un emplacement pour nb entiers dans lesquels
    // on place les carrés des nombres de 1 a nb
  adi = new int [nb] ;
  cout << "allocation de " << nb << " int en     : " << adi << "\n" ;
  for (int i=0 ; i<nb ; i++) *(adi+i) = (i+1)*(i+1) ;
  cout << "voici les carres des nombres de 1 a " << nb << " : \n" ;
  for (adibis = adi ; adibis < adi+nb ; adibis++) cout << *adibis << " " ;
  cout << "\n" ;
     // allocation d’un emplacement pour 30 floattants
  adf = new float [30] ;
  cout << "allocation de 30 float en   : " << adf << "\n" ;
     // libération des nb int
  delete adi ;
  cout << "liberation des " << nb << " int en    : " << adi << "\n" ;
    // ici, il serait dangereux d’utiliser les emplacements pointés par adibis
    //   (comme, bien sur, ceux pointés par adi)
  adi = new int [50] ;
  cout << "allocation de 50 int en     : " << adi << "\n"  ;
  delete adf ;
  cout << "liberation des 30 float en  : " << adf << "\n" ;
  adf = new float [10] ;
  cout << "allocation de 10 float en   : " << adf << "\n" ;
}