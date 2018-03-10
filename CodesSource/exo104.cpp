         /***** fichier pointcol.h : déclaration de pointcol *****/
#include "point.h"
#include <iostream> 
using namespace std ;
class pointcol
{   point p ;
    int cl ;
  public :
    pointcol (float = 0.0, float = 0.0, int = 0) ;
    void colore (int coul)
      { cl = coul ;
      }
    void affiche ()                      
      {  p.affiche () ;                    // affiche doit appeler affiche
         cout  << "  couleur : " << cl ;   // du point p pour les coordonnées
      }
} ;
         /****** définition du constructeur de pointcol *****/
#include "point.h"
#include "pointcol.h"
pointcol::pointcol (float abs, float ord, int coul) : p (abs, ord)
{  cl = coul ;  
}
