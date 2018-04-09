#include <iostream>
#include <cstdlib>       /* ancien <stdlib.h> : pour exit */
using namespace std ;
 /* déclaration de la classe vect */
class vect
{ int nelem ;
  int * adr ;
 public :
  vect (int) ;
  ~vect () ;
  int & operator [] (int) ;
} ;
 /* déclaration et définition d'une classe vect_limite (vide pour l'instant) */
class vect_limite
{ } ;
 /* définition de la classe vect */
vect::vect (int n)
{ adr = new int [nelem = n] ; }
vect::~vect ()
{ delete adr ; }
int & vect::operator [] (int i)
{ if (i<0 || i>nelem)
   { vect_limite l ; throw (l) ;
   }
  return adr [i] ;
}
 /* test interception exception vect_limite */
int main ()
{ try
  { vect v(10) ;
    v[11] = 5 ;    /* indice trop grand */
  }
  catch (vect_limite l)  /* nom d'argument superflu ici */
  { cout << "exception limite \n" ;
    exit (-1) ;
  }
}
