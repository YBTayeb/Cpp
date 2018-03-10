	      /*         fichier SETINT4.H        */
	      /* déclaration de la classe set_int */
struct noeud 
{  int valeur ;                // valeur d'un élément de l'ensemble
   noeud * suivant ;           // pointeur sur le noeud suivant de la liste
} ;
class set_int
{  noeud * debut ;             // pointeur sur le début de la liste
   int nelem ;                 // nombre courant d'éléments
   noeud * courant ;           // pointeur sur noeud courant
 public :
   set_int (int = 20) ;        // constructeur
   set_int (set_int &) ;       // constructeur par recopie
   ~set_int () ;               // destructeur
   void ajoute (int) ;         // ajout d'un élément
   int appartient (int) ;      // appartenance d'un élément
   int cardinal () ;           // cardinal de l'ensemble
   void init () ;              // initialisation itération
   int prochain () ;           // entier suivant
   int existe () ;             // test fin liste
} ;



void set_int::init ()
{  courant = debut ;
}
int set_int::prochain ()
{  if (courant)
      { int val = courant->valeur ;
        courant = courant->suivant ;
        return val ;
      }
     else return 0 ;    // par convention
}
int set_int::existe ()
{  return (courant != NULL) ;
}




	 /* utilisation de la classe set_int */
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
   cout << "Ce sont : \n" ;
   ens.init () ;
   while (ens.existe ())
      cout << ens.prochain() << " " ;
}
