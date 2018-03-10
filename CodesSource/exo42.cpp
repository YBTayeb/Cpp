#include <iostream>
using namespace std ;
main()
{ int nval ;            //  nombre de valeurs
  int * adt1, * adt2 ;  // attention, pas int * adt1, adt2
  do { cout << "combien de valeurs : " ;
       cin >> nval ;
     }
  while (nval <= 0) ;    // on refuse les valeurs négatives
      /* allocation premier tableau, lecture valeurs */
  adt1 = new int [nval] ;
  cout << "donnez " << nval << " valeurs \n ";
  for (int i = 0 ; i<nval ; i++) cin >> adt1[i] ;   // ou cin * (adt1+i)
     /* allocation second tableau, calcul des carrés */
  adt2 = new int [nval] ;
  for (int i = 0 ; i<nval ; i++) adt2[i] = adt1[i] * adt1[i] ;
     /* suppression premier tableau, affichage valeurs */
  delete adt1 ;
  cout << "voici leurs carrés : \n" ;
  for (int i = 0 ; i<nval ; i++) cout << adt2[i] << " " ;
     /* suppression du second tableau */
  delete adt2 ;
}