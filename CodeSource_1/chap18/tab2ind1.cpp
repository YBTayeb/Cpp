// implémentation d'un tableau à deux dimensions
#include <iostream>
using namespace std ;
template <class T, int n> class tableau
{
   T tab [n] ;
  public :
   tableau ()                    // constructeur
     {cout << "construction tableau a " << n << " elements\n" ;
     }
   T & operator [] (int i)       // opérateur []
     { return tab[i] ;
     }
} ;
int main()
{
    tableau <tableau<int,2>,3> t2d ;
    t2d [1] [2] = 15 ;
    cout << "t2d [1] [2] = " << t2d [1] [2] << "\n" ;
    cout << "t2d [0] [1] = " << t2d [0] [1] << "\n" ;
}
