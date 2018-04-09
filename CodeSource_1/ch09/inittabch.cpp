#include <iostream>
using namespace std ;
int main()
{  char * jour[7] = { "lundi", "mardi", "mercredi", "jeudi",
                      "vendredi", "samedi", "dimanche" } ;
   int i ;
   cout << "donnez un entier entre 1 et 7 : " ;
   cin >> i ;
   cout << "le jour numero " << i << " de la semaine est " << jour[i-1]  ;
}