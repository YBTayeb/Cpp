	 /****** fichier int2d.h :déclaration de la classe int2d ******/
class int2d 
{  int nlig ;        // nombre de "lignes" 
   int ncol ;        // nombre de "colonnes"
   int * adv ;       // adresse emplacement dynamique contenant les valeurs
  public :
   int2d (int nl, int nc) ;        // constructeur
   ~int2d () ;                     // destructeur
   int & operator () (int, int) ;  // accès à un élément, par ses 2 "indices"
} ;


#include "int2d.h"
class int2db : public int2d
{   int ligdeb, ligfin ;      // bornes (mini, maxi) premier indice
    int coldeb, colfin ;      // bornes (mini, maxi) second indice
  public :                    // constructeur
    int2db (int ld, int lf, int cd, int cf) : int2d (lf-ld+1, cf-cd+1)
      {  ligdeb = ld ; ligfin = lf ;
         coldeb = cd ; colfin = cf ;
      }
    int & int2db::operator () (int i, int j)     // rédéfinition de operator ()
      {  return int2d::operator () (i-ligdeb, j-coldeb) ;
      }
} ;
