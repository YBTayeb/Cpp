	      /*         fichier SETINT3.H        */
	      /* d�claration de la classe set_int */
struct noeud 
{ 
   int valeur ;                // valeur d'un �l�ment de l'ensemble
   noeud * suivant ;           // pointeur sur le noeud suivant de la liste
} ;

class set_int
{
   noeud * debut ;             // pointeur sur le d�but de la liste
   int nelem ;                 // nombre courant d'�l�ments
 public :
   set_int (int = 20) ;        // constructeur  (argument inutile ici)
   set_int (set_int &) ;       // constructeur par recopie
   ~set_int () ;               // destructeur
   void ajoute (int) ;         // ajout d'un �l�ment
   int appartient (int) ;      // appartenance d'un �l�ment
   int cardinal () ;           // cardinal de l'ensemble
} ;





#include <stdlib.h>          // pour NULL
#include "setint3.h"
set_int::set_int (int dim)   // dim est conserv� pour la compatibilit�
   			       // avec l'ancienne classe
{  debut = NULL ;
   nelem = 0 ;
}

set_int::set_int (set_int & e)    // ou :  set_int::set_int (const set_int & e)
{  nelem = e.nelem ;
       // cr�ation d'une nouvelle liste identique � l'ancienne
   noeud * adsource = e.debut  ;
   noeud * adbut ;
   debut = NULL ;
   while (adsource)
       { adbut = new noeud ;                // cr�ation nouveau noeud
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
	{ adn = courant ;                  // lib�ration de tous
	  courant = courant->suivant ;     //    les noeuds
	  delete adn ;                     //    de la liste
	}
}

void set_int::ajoute (int nb)
{
   if (!appartient (nb) )          // si nb n'appartient pas � la liste
     { noeud * adn = new noeud ;   // on l'ajoute en d�but de liste
       adn->valeur = nb ;
       adn->suivant = debut ;
       debut = adn ;
       nelem++ ;
     }
}

int set_int::appartient (int nb)
{  noeud * courant = debut ;
       // attention � l'ordre des deux conditions
   while (courant && (courant->valeur != nb) ) courant = courant->suivant ;
   return (courant != NULL) ;
}

int set_int::cardinal ()
{  return nelem ;
}
