#include <iostream>
#include <iomanip>   // pour setw
using namespace std ;
main()
{
    int nbf ;        // compteur du nombre de façons de faire 1 euro
    int n10 ;        // nombre de pièces de 10 centimes
    int n5 ;         // nombre de pièces de 5 centimes
    int n2 ;         // nombre de pièces de 2 centimes

    nbf = 0 ;
    for (n10=0 ; n10<=10 ; n10++)
      for (n5=0 ; n5<=20 ; n5++)
      for (n2=0 ; n2<=50 ; n2++)
      if ( 2*n2 + 5*n5 + 10*n10 == 100)
         { nbf ++ ;
           cout << "1 euro = " ;
           if (n2)  cout << setw(2) << n2  << " X 2c   " ;
           if (n5)  cout << setw(2) << n5  << " X 5c   " ;
           if (n10) cout << setw(2) << n10 << " X 10c  " ;
           cout << "\n" ;
         }

   cout << "\nEn tout, il y a " << nbf << " façons de faire 1 euro\n" ;
}