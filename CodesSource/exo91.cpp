	 /******** déclaration de la classe int2d ********/
class int2d 
{  int nlig ;        // nombre de "lignes" 
   int ncol ;        // nombre de "colonnes"
   int * adv ;       // adresse emplacement dynamique contenant les valeurs
  public :
   int2d (int nl, int nc) ;        // constructeur
   ~int2d () ;                     // destructeur
   int & operator () (int, int) ;  // accès à un élément, par ses 2 "indices"
} ;
	 /*********** définition du constructeur **********/	    
int2d::int2d (int nl, int nc)
{  nlig = nl ;
   ncol = nc ;
   adv = new int [nl*nc] ;
   int i ;
   for (i=0 ; i<nl*nc ; i++) adv[i] = 0 ;   // mise à zéro 
}

	 /*********** définition du destructeur ***********/
int2d::~int2d ()
{  delete adv ;
}

	 /********** définition de l'opérateur () *********/
int & int2d::operator () (int i, int j)
{  if ( (i<0) || (i>=nlig) ) i=0 ;  // protections sur premier indice
   if ( (j<0) || (j>=ncol) ) j=0 ;  // protections sur second indice
   return * (adv + i * ncol + j) ;
}



#include "int2d.h"
#include <iostream>  
using namespace std ;
main()
{   int2d t1 (4,3) ;
    int i, j ;
    for (i=0 ; i<4 ; i++)
       for (j=0 ; j<3 ; j++)
      	  t1(i, j) = i+j ;
    for (i=0 ; i<4 ; i++)
       { for (j=0 ; j<3 ; j++)
	      cout << t1 (i, j) << " " ;
	     cout << "\n" ;
       }
}
