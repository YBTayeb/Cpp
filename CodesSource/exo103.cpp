#include <iostream> 
using namespace std ;
class point
{   float x, y ;
  public :
    point (float abs=0.0, float ord=0.0)
       { x = abs ; y = ord ;
       }
    void affiche ()
       { cout << "Coordonn�es : " << x << " " << y << "\n" ;
       }

    void deplace (float dx, float dy)    
       { x =  x + dx ;  y = y + dy ;
       }
} ;

         /****** fichier pointcol.h :d�claration de pointcol ******/
#include "point.h"
#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilit�s
                     // d'entr�es-sorties" du chapitre II
using namespace std ;
class pointcol : public point
{   int cl ;
  public :
    pointcol (float = 0.0, float = 0.0, int = 0) ;
    void colore (int coul)
      { cl = coul ;
      }
    void affiche ()                       // affiche doit appeler affiche de
      { point::affiche () ;               //   point pour les coordonn�es
        cout << "  couleur : " << cl ;    //   mais elle a acc�s � la couleur
      }
} ;

         /****** d�finition du constructeur de pointcol *****/
#include "point.h"
#include "pointcol.h"
pointcol::pointcol (float abs, float ord, int coul) : point (abs, ord)
{  cl = coul ;       // on pourrait aussi �crire colore (coul) ;
}
