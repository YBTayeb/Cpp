#include <iomanip>     // pour les "manipulateurs paramétriques"
#include <iostream>   
using namespace std ;
main()
{  float val, carre ;
   cout << "donnez un nombre réel : " ;
   cin  >> val ;
   carre = val*val ;
   cout << "Voici son carré : \n" ;
   int i ;
   cout << "  en notation point fixe : \n" ;
   cout.setf (ios::fixed, ios::floatfield) ;   // met à 1 le bit ios::fixed
                                               // du champ ios::floatfield 
   for (i=0 ; i<10 ; i++)
      cout << "      précision de " << setw (2) << i << " chiffres : "
           << setprecision (i) << setw (12) << carre << "\n" ;
   cout << "  en notation scientifique : \n" ;
   cout.setf (ios::scientific, ios::floatfield) ;
   for (i=0 ; i<10 ; i++)
      cout << "      précision de " << setw (2) << i << " chiffres : "
           << setprecision (i) << setw (12) << carre << "\n" ;
}
