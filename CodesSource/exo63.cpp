#include <cstdlib>       // pour exit
#include <new>            // pour set_new_handler (parfois <new.h>
#include <iostream>       // voir N.B. du paragraphe 
                          // nouvelles possibilités d'entrées-sorties using namespace std ;

      /*       fichier POINT2.H         */
      /* déclaration de la classe point */
class point
{  
   float x, y ;                   // coordonnées (cartésiennes) du point
 public :
   point (float, float) ;         // constructeur
   void deplace (float, float) ;  // déplacement
   float abscisse () ;            // abscisse du point
   float ordonnee () ;            // ordonnée du point
} ;


#include <cstdlib>       // pour exit
#include <new>            // pour set_new_handler (parfois <new.h>
#include <iostream> 
using namespace std ;

	      /* définition de la classe point */
#include "point2.h"
#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties du chapitre II
using namespace std ;
point::point (float abs, float ord)
{  x = abs ; y = ord ;
}
void point::deplace (float dx, float dy)
{  x = x + dx ; y = + dy ;
}
float point::abscisse ()
{ return x ;
}
float point::ordonnee ()
{ return y ;
}




#include <stdlib.h>       // pour exit
#include <new>            // pour set_new_handler (parfois <new.h>
#include <iostream>       // voir N.B. du paragraphe 
                          // nouvelles possibilités d'entrées-sorties 
using namespace std ;

        /* exemple d'utilisation de la classe point */
#include "point2.h"
#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties du chapitre II
using namespace std ;
main ()
{ 
   point p (1.25, 2.5) ;                                    // construction
                                                            // affichage
   cout << "Coordonnées cartésiennes : " << p.abscisse () << " " 
                                         << p.ordonnee () << "\n" ;
   p.deplace (2.1, 3.4) ;                                   // déplacement 
                                                            // affichage    
   cout << "Coordonnées cartésiennes : " << p.abscisse () << " " 
                                         << p.ordonnee () << "\n" ;
}
