      /*         fichier SETCHAR2.H        */
      /* déclaration de la classe set_char */
const int N_CAR_MAX=256     // on pourrait utiliser UCHAR_MAX défini
                            //    dans <climits>

class set_char
{
   unsigned char ens [N_CAR_MAX] ;
		  // tableau des indicateurs (présent/absent)
		  // pour chacun des caractères possibles
   int courant ;  // position courante dans le tableau ens
   int fin ;      // indique si fin atteinte
 public :
   set_char () ;                     // constructeur
   void ajoute (unsigned char) ;     // ajout d'un élément
   int appartient (unsigned char) ;  // appartenance d'un élément
   int cardinal () ;                 // cardinal de l'ensemble
   void init () ;                    // initialisation itération
   unsigned char suivant () ;        // caractère suivant
   int existe () ;                   //
} ;



void set_char::init ()
{  courant=0 ; fin = 0 ;
   while ( (++courant<N_CAR_MAX) && (!ens[courant]) ) ;
	 // si la fin de ens est atteinte, courant vaut N_CAR_MAX
   if (courant>=N_CAR_MAX) fin = 1 ;
}

unsigned char set_char::suivant ()
{   if (fin) return 0 ;  // au cas où on serait déjà en fin de ens
    unsigned char c = courant ;   // conservation du caractère courant
       // et recherche du suivant s'il existe
    while ( (++courant<N_CAR_MAX) && (!ens[courant]) )  ;
       // si la fin de ens est atteinte, courant vaut N_CAR_MAX
    if (courant>=N_CAR_MAX) fin = 1 ;   // s'il n'y a plus de caractère
    return c ;
}
int set_char::existe ()
{   return (!fin) ;
}





#include <string.h>
#include "setchar2.h"
#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties du chapitre II
using namespace std ;
main()
{  set_char ens ;
   char mot [81] ;
   cout << "donnez un mot " ;
   cin >> mot ;
   int i ;
   for (i=0 ; i<strlen(mot) ; i++) ens.ajoute (mot[i]) ;
   cout << "il contient " << ens.cardinal () << " caractères différents"
        << " qui sont :\n" ;
   ens.init() ; // init itération sur les caractères de l'ensemble
   while (ens.existe())
     cout << ens.suivant () ;
}
