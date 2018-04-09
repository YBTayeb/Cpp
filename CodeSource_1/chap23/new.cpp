#include <cstdlib>     //   pour exit
#include <iostream>
using namespace std ;
int main()
{  long taille ;
   int * adr ;
   int nbloc ;
   cout << "Taille souhaitee ? " ;
   cin >> taille ;
   for (nbloc=1 ; ; nbloc++)
   { adr = new (nothrow) int [taille] ;
     if (adr==0) { cout << "**** manque de memoire ****\n" ;
                   exit (-1) ;
                 } 
     cout << "Allocation bloc numero : " << nbloc << "\n" ;
   }
} 