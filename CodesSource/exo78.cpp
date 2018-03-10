	      /*         fichier SETINT3.H        */
	      /* déclaration de la classe set_int */
struct noeud 
{ 
   int valeur ;                // valeur d'un élément de l'ensemble
   noeud * suivant ;           // pointeur sur le noeud suivant de la liste
} ;

class set_int
{
   noeud * debut ;             // pointeur sur le début de la liste
   int nelem ;                 // nombre courant d'éléments
 public :
   set_int (int = 20) ;        // constructeur  (argument inutile ici)
   set_int (set_int &) ;       // constructeur par recopie
   ~set_int () ;               // destructeur
   void ajoute (int) ;         // ajout d'un élément
   int appartient (int) ;      // appartenance d'un élément
   int cardinal () ;           // cardinal de l'ensemble
} ;





#include <stdlib.h>          // pour NULL
#include "setint3.h"
set_int::set_int (int dim)   // dim est conservé pour la compatibilité
   			       // avec l'ancienne classe
{  debut = NULL ;
   nelem = 0 ;
}

set_int::set_int (set_int & e)    // ou :  set_int::set_int (const set_int & e)
{  nelem = e.nelem ;
       // création d'une nouvelle liste identique à l'ancienne
   noeud * adsource = e.debut  ;
   noeud * adbut ;
   debut = NULL ;
   while (adsource)
       { adbut = new noeud ;                // création nouveau noeud
         adbut->valeur = adsource->valeur ; // copie valeur
         adbut->suivant = debut ;           // insertion nouveau noeud
         debut = adbut ;                    //     dans nouvelle liste
         adsource = adsource->suivant ;     // noeud suivant ancienne liste
       }
}

set_int::~set_int ()
{   noeud * adn ;
    noeud * courant = debut ;
    while (courant)
	{ adn = courant ;                  // libération de tous
	  courant = courant->suivant ;     //    les noeuds
	  delete adn ;                     //    de la liste
	}
}

void set_int::ajoute (int nb)
{
   if (!appartient (nb) )          // si nb n'appartient pas à la liste
     { noeud * adn = new noeud ;   // on l'ajoute en début de liste
       adn->valeur = nb ;
       adn->suivant = debut ;
       debut = adn ;
       nelem++ ;
     }
}

int set_int::appartient (int nb)
{  noeud * courant = debut ;
       // attention à l'ordre des deux conditions
   while (courant && (courant->valeur != nb) ) courant = courant->suivant ;
   return (courant != NULL) ;
}

int set_int::cardinal ()
{  return nelem ;
}
