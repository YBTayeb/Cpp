#include "setint1.h"
#include <iostream> 
using namespace std ;
main()
{  set_int ens ;
   cout << "donnez 20 entiers \n" ;
   int i, n ;
   for (i=0 ; i<20 ; i++)
      { cin >> n ;
        ens.ajoute (n) ;
      }
   cout << "il y a : " << ens.cardinal () << " entiers différents\n" ;
}


#include "setint1.h"
set_int::set_int (int dim)
{  adval = new int [nmax = dim] ;    // allocation tableau de valeurs
   nelem = 0 ;
}
set_int::~set_int ()
{  delete adval ;                    // libération tableau de valeurs
}
void set_int::ajoute (int nb)
{   // on examine si nb appartient déjà à l'ensemble
    //   en utilisant la fonction membre appartient
    // s'il n'y appartient pas et si l'ensemble n'est pas plein
    //   on l'ajoute
   if (!appartient (nb) && (nelem<nmax))  adval [nelem++] = nb ;
}
int set_int::appartient (int nb)
{  int i=0 ;
     // on examine si nb appartient déjà à l'ensemble
	//  (si ce n'est pas le cas, i vaudra nele en fin de boucle)
   while ( (i<nelem) && (adval[i] != nb) ) i++ ;
   return (i<nelem) ;
}
int set_int::cardinal ()
{  return nelem ;
}



#include "setint1.h"
#include <iostream>  
using namespace std ;
main()
{  set_int ens ;
   cout << "donnez 20 entiers \n" ;
   int i, n ;
   for (i=0 ; i<20 ; i++)
      { cin >> n ;
        ens.ajoute (n) ;
      }
   cout << "il y a : " << ens.cardinal () << " entiers différents\n" ;
}
