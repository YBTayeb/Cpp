#include <iostream> 
#include <set>        // pour la classe set 
using namespace std ;
main()
{  set<int> ens ;
   cout << "donnez 20 entiers \n" ;
   int i, n ;
   for (i=0 ; i<20 ; i++)
   { cin >> n ;
    	ens.insert (n) ;
   }


   cout << "il y a : " << ens.size() << " entiers differents\n" ;
   cout << "Ce sont : \n" ;
   set<int>::iterator is ;
   for (is=ens.begin() ; is != ens.end() ; is++)
      cout << *is << " " ;
}
