class vect
{  int nelem ;        // nombre d'éléments
   int * adr ;        // adresse zone dynamique contenant les éléments
 public :
   vect (int) ;               // constructeur (précise la taille du vecteur)
   ~vect () ;                 // destructeur
   int & operator [] (int) ;  // accès à un élément par son "indice"
} ;


#include "vect.h"
class vectb : public vect
{   int debut, fin ;
  public :
    vectb ( int d, int f) : vect (f-d+1) 
      { debut = d ; fin = f ;
      }
    int & operator [] (int i)
      { return vect::operator [] (i-debut) ;
      }
} ;
