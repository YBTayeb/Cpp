   // implémentation d’un tableau 2d avec test débordement d’indices
#include <iostream>
using namespace std ;
template <class T, int n> class tableau
{  T tab [n] ;
   int limite ;         // nombre d’éléments du tableau
  public :
   tableau (int init=0)  
     {  int i ;
        for (i=0 ; i<n ; i++) tab[i] = init ; 
        limite = n-1 ;
        cout << "appel constructeur tableau de taille " << n  
             << " init = " << init << "\n" ;
     }
   T & operator [] (int i)
   { if (i<0 || i>limite) { cout << "--debordement " << i << "\n" ;
                            i=0 ;  // choix arbitraire
                          }
     return tab[i] ;
   }
} ;

int main()
{   tableau <tableau<int,3>,2> ti ;         // pas d’initialisation
    tableau <tableau<float,4>,2> td (10) ;  // initialisation à 10
    ti [1] [6] = 15 ;
    ti [8] [-1] = 20 ;
    cout << ti [1] [2] << "\n" ;   // élément initialisé à valeur par défaut (0)
    cout << td [1] [0] << "\n" ;   // élément initialisé explicitement
}
