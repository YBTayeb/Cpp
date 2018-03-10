class vect
{  int nelem ;        // nombre d'�l�ments
   int * adr ;        // adresse zone dynamique contenant les �l�ments
 public :
   vect (int) ;               // constructeur (pr�cise la taille du vecteur)
   ~vect () ;                 // destructeur
   int & operator [] (int) ;  // acc�s � un �l�ment par son "indice"
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
