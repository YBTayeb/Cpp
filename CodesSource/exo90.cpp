	 /********** d�claration de la classe vect ********/
class vect
{  int nelem ;        // nombre d'�l�ments
   int * adr ;        // adresse zone dynamique contenant les �l�ments
 public :
   vect (int) ;               // constructeur
   ~vect () ;                 // destructeur
   int & operator [] (int) ;  // acc�s � un �l�ment par son "indice"
} ;
	 /*********** d�finition de la classe vect ********/
vect::vect (int n)
{  adr = new int [nelem = n] ;
   int i ;
   for (i=0 ; i<nelem ; i++) adr[i] = 0 ;
}
vect::~vect ()
{  delete adr ;
}
int & vect::operator [] (int i)
{  if ( (i<0)  || (i>=nelem) ) i=0 ;    // protection
   return adr [i] ;
}


#include "vect.h"
#include <iostream> 
using namespace std ;
main()
{  vect v(6) ;
   int i ;
   for (i=0 ; i<6 ; i++) v[i] = i ;
   for (i=0 ; i<6 ; i++) cout << v[i] << " " ;
}
