#include <iostream> 
#include <vector>        // pour la classe vector 
using namespace std ;
main()
{  vector <int> v(6) ;
   int i ;
   for (i=0 ; i<6 ; i++) v[i] = i ;
   for (i=0 ; i<6 ; i++) cout << v[i] << " " ;
}






#include <iostream>  
#include <vector>        // pour la classe vector 
#include <stdexcept>     // pour la classe exception out_of_range
using namespace std ;
main()
{ try
  { vector <int> v(6) ;
     int i ;
     for (i=0 ; i<6 ; i++) v.at(i) = i ;
     for (i=0 ; i<8 ; i++) cout << v.at(i) << " " ; // ici on deborde de v
  }
  catch (out_of_range oor)
  { cout << "exception out of range\n" ;
    exit(-1) ;
  }
} 






#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties du chapitre II
#include <vector>        // pour la classe vector 
#include <stdexcept>     // pour la classe exception out_of_range
using namespace std ;

class vect : public vector<int>
{ public :
   vect (int dim) : vector<int> (dim) {}  // indispensable
   // surdéfinition de l'opérateur []
   int & operator [] (int i) 
   { // on pourrait aussi chercher à modifier autoritairement la valeur de i par :
     // if ( (i<0)  || (i>=(*this).size()) ) i=0 ;
     return (*this).at(i) ;
   }
} ;

main()
{ try
  { vect v(6) ;
     int i ;
     for (i=0 ; i<6 ; i++) v[i] = i ;
     for (i=0 ; i<8 ; i++) cout << v[i] << " " ; // ici on deborde de v
  }
  catch (out_of_range oor)
  { cout << "exception out of range\n" ;
    exit(-1) ;
  }
}
