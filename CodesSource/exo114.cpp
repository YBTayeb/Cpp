struct element                           // structure d'un �l�ment de liste
{ element * suivant ;                    // pointeur sur l'�l�ment suivant
  void * contenu ;                       // pointeur sur un objet quelconque
} ;

class liste 
{ element * debut ;                      // pointeur sur premier �l�ment 
         // autres membres donn�es �ventuels
 public :
  liste () ;                             // constructeur  
  ~liste () ;                            // destructeur
  void ajoute (void *) ;                 // ajoute un �l�ment en d�but de liste
  void * premier () ;                    // positionne sur premier �l�ment
  void * prochain () ;                   // positionne sur prochain �l�ment
  int fini () ;
} ;


class point
{ int x, y ;
 public :
  point (int abs=0, int ord=0) { x=abs ; y=ord ; }
  void affiche () { cout << "Coordonn�es : " << x << " " << y << "\n" ; }
} ;



#include <cstdlib>                       // pour NULL
struct element                           // structure d'un �l�ment de liste
{ element * suivant ;                    // pointeur sur l'�l�ment suivant
  void * contenu ;                       // pointeur sur un objet quelconque
} ;
class liste 
{ element * debut ;                      // pointeur sur premier �l�ment 
  element * courant ;                    // pointeur sur �l�ment courant 
 public :
  liste ()                               // constructeur  
    { debut = NULL ;
      courant = debut ;                  //   par s�curit�
    }
  ~liste () ;                            // destructeur
  void ajoute (void *) ;                 // ajoute un �l�ment en d�but de liste
  void * premier ()                      // positionne sur premier �l�ment
  { courant = debut ; 
    if (courant != NULL) return (courant->contenu) ;
 	                else return NULL ;
  }
  void * prochain ()                     // positionne sur prochain �l�ment
  { if (courant != NULL)
	{ courant = courant->suivant ;
       if (courant != NULL) return (courant->contenu) ; 
	}
    return NULL ;
  }
  int fini () { return (courant == NULL) ; }
} ;
liste::~liste ()
{ element * suiv ;
  courant = debut ;
  while (courant != NULL )
   { suiv = courant->suivant ; delete courant ; courant = suiv ; } 
}
void liste::ajoute (void * chose)
{ element * adel = new element ;
  adel->suivant = debut ;
  adel->contenu = chose ;
  debut = adel ;
}
class liste_points : public liste, public point 
{ public :
   liste_points () {}
   void affiche () ;
} ;
void liste_points::affiche ()
{ point * ptr = (point *) premier() ;
  while ( ! fini() ) {  ptr->affiche () ; ptr = (point *) prochain() ; }
} 



#include "listepts.h"
main()
{ liste_points l ;
  point a(2,3), b(5,9), c(0,8) ;
  l.ajoute (&a) ; l.affiche () ; cout << "---------\n" ;
  l.ajoute (&b) ; l.affiche () ; cout << "---------\n" ;
  l.ajoute (&c) ; l.affiche () ; cout << "---------\n" ;
}
