#include <iostream>
#include <cstdlib>    // ancien <stdlib.h>   pour exit
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

 /* déclaration - définition des deux classes exception */
class vect_limite
{ public :
   int hors ;             // valeur indice hors limites (public)
   vect_limite (int i)    // constructeur
    { hors = i ; }
} ;

class vect_creation
{ public :
   int nb ;               // nombre elements demandes (public)
   vect_creation (int i)  // constructeur
    { nb = i ; }
} ;

 /* définition de la classe vect */
vect::vect (int n)
{ if (n <= 0)
    { vect_creation c(n) ;     // anomalie
      throw c ;
    }
  adr = new int [nelem = n] ; // construction normale
}
vect::~vect ()
{ delete adr ;
}

int & vect::operator [] (int i)
{ if (i<0 || i>nelem)
     { vect_limite l(i) ;     // anomalie
       throw l ;
     }
  return adr [i] ;            // fonctionnement normal
}

 /* test exception */
int main ()
{
  try
  { vect v(-3) ;      // provoque l'exception vect_creation
    v[11] = 5 ;       // provoquerait l'exception vect_limite
  }
  catch (vect_limite l)
  { cout << "exception indice " << l.hors << " hors limites \n" ;
    exit (-1) ;
  }
  catch (vect_creation c)
  { cout << "exception creation vect nb elem = " << c.nb << "\n" ;
    exit (-1) ;
  }
 }
