#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties du chapitre II
#include <set>        // pour la classe set 
using namespace std ;


main()
{  set<int> ens ;    // voir note  
   cout << "donnez 20 entiers \n" ;
   int i, n ;
   for (i=0 ; i<20 ; i++)
   { cin >> n ;
     ens.insert (n) ;
   }
   cout << "il y a : " << ens.size() << " entiers differents\n" ;
}
