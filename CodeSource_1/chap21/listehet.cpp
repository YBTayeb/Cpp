#include <iostream>
using namespace std ;
// **************** classe mere ********************************************
class mere
{ public :
    virtual void affiche ()const = 0 ;   // fonction virtuelle pure
} ;
// ********************* classe liste **************************************
struct element                           // structure d’un élément de liste
{ element * suivant ;                    // pointeur sur l’élément suivant
  mere * contenu ;                       // pointeur sur un objet quelconque
} ;
class liste
{  element * debut ;                      // pointeur sur premier élément
   element * courant ;                    // pointeur sur élément courant
 public :
   liste ()                               // constructeur
     { debut = 0 ; courant = debut ; }
   ~liste () ;                            // destructeur
   void ajoute (mere *) ;                 // ajoute un élément
   void premier ()                        // positionne sur premier élément
    { courant = debut ;  }
   mere * prochain ()        // fournit l’adresse de l’élément courant (0 si fin)
                             // et positionne sur prochain élément (rien si fin)
    { mere * adsuiv = 0 ;
      if (courant != 0) { adsuiv = courant -> contenu ;
                          courant = courant -> suivant ;
                        }
      return adsuiv ;
    }
   void affiche_liste () ;      // affiche tous les éléments de la liste
   int fini () { return (courant == 0) ; }
} ;
liste::~liste ()
{ element * suiv ;
  courant = debut ;
  while (courant != 0 )
   { suiv = courant->suivant ; delete courant ; courant = suiv ; }
}
void liste::ajoute (mere * chose)
{ element * adel = new element ;
  adel->suivant = debut ;
  adel->contenu = chose ;
  debut = adel ;
}
void liste::affiche_liste () 
{ mere * ptr ;       
  premier() ;
  while ( ! fini() )
    { ptr = (mere *) prochain() ;
      ptr->affiche () ;
    }
}
// **************** classe point *******************************************
class point : public mere
{ int x, y ;
 public :
   point (int abs=0, int ord=0) { x=abs ; y=ord ; }
   void affiche () const
    { cout << "Point de coordonnees : " << x << " " << y << "\n" ; }
} ;
// **************** classe complexe ****************************************
class complexe : public mere
{  double reel, imag ;
 public :
   complexe (double r=0, double i=0) { reel=r ; imag=i ; }
   void affiche () const
    { cout << "Complexe : " << reel << " + " << imag << "i\n" ; }
} ;
// **************** programme d’essai **************************************
int main()
{ liste l1 ;
  point a(2,3), b(5,9) ;
  complexe x(4.5,2.7), y(2.35,4.86) ;
  l1.ajoute (&a) ; l1.ajoute (&x) ; l1.affiche_liste () ;
  cout << "--------\n" ;
  l1.ajoute (&y) ; l1.ajoute (&b) ; l1.affiche_liste () ;
} 
