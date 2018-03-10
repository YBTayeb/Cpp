class set_int
{  int * adval ;               // adresse du tableau des valeurs
   int nmax ;                  // nombre maxi d'�l�ments
   int nelem ;                 // nombre courant d'�l�ments
 public :
   set_int (int = 20) ;        // constructeur
   ~set_int () ;               // destructeur
   set_int & operator < (int) ;
   int operator [] (int) ;     // attention r�sultat par valeur
} ;

set_int::set_int (int dim) 
{ adval = new int [nmax=dim] ;
  nelem = 0 ;
}

set_int::~set_int ()             
{ delete adval ;
}

      /* surd�finition de < */
set_int & set_int::operator < (int nb)
{   // on examine si nb appartient d�j� � l'ensemble
    //   en utilisant l'op�rateur []
   if ( ! (*this)[nb] && (nelem < nmax) )  adval [nelem++] = nb ;
   return (*this) ;
}
       /* surd�finition de [] */
int set_int::operator [] (int nb)     // attention r�sultat par valeur
{  int i=0 ;
	// on examine si nb appartient d�j� � l'ensemble
	//  (dans ce cas i vaudra nele en fin de boucle)
   while ( (i<nelem) && (adval[i] != nb) ) i++ ;
   return (i<nelem) ;
} 


#include "set_int.h"
#include <iostream>  
using namespace std ;
main()
{ set_int ens(10) ;
  ens < 25 < 2 < 25 < 3 ;
  cout << (ens[25]) << " " << (ens[5]) << "\n" ;
}
