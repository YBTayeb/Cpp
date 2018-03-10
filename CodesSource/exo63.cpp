#include <cstdlib>       // pour exit
#include <new>            // pour set_new_handler (parfois <new.h>
#include <iostream>       // voir N.B. du paragraphe 
                          // nouvelles possibilit�s d'entr�es-sorties using namespace std ;

      /*       fichier POINT2.H         */
      /* d�claration de la classe point */
class point
{  
   float x, y ;                   // coordonn�es (cart�siennes) du point
 public :
   point (float, float) ;         // constructeur
   void deplace (float, float) ;  // d�placement
   float abscisse () ;            // abscisse du point
   float ordonnee () ;            // ordonn�e du point
} ;


#include <cstdlib>       // pour exit
#include <new>            // pour set_new_handler (parfois <new.h>
#include <iostream> 
using namespace std ;

	      /* d�finition de la classe point */
#include "point2.h"
#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilit�s
                     // d'entr�es-sorties du chapitre II
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
                          // nouvelles possibilit�s d'entr�es-sorties 
using namespace std ;

        /* exemple d'utilisation de la classe point */
#include "point2.h"
#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilit�s
                     // d'entr�es-sorties du chapitre II
using namespace std ;
main ()
{ 
   point p (1.25, 2.5) ;                                    // construction
                                                            // affichage
   cout << "Coordonn�es cart�siennes : " << p.abscisse () << " " 
                                         << p.ordonnee () << "\n" ;
   p.deplace (2.1, 3.4) ;                                   // d�placement 
                                                            // affichage    
   cout << "Coordonn�es cart�siennes : " << p.abscisse () << " " 
                                         << p.ordonnee () << "\n" ;
}
