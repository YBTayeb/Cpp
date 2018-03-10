	      /*         fichier ensheter.H         */
	      /* d�claration de la classe ens_heter */
class base ;        
class ens_heter
{  int nmax ;       // nombre maximal d'�l�ments
   int nelem ;      // nombre courant d'�l�ments
   base * * adel ;  // adresse zone de pointeurs sur les objets �l�ments
   int courant ;    // num�ro d'�l�ment courant (pour l'it�ration)
 public :
   ens_heter (int=20) ;       // constructeur
   ~ens_heter () ;            // destructeur
   void ajoute (base &) ;     // ajout d'un �l�ment
   int appartient (base &) ;  // appartenance d'un �l�ment
   int cardinal () ;          // cardinal de l'ensemble
   void init () ;             // initialisation it�ration
   base & suivant () ;        // passage �l�ment suivant
   int existe () ;            // 
   void liste () ;            // affiche les "valeurs" des diff�rents �l�ments
} ;



class base 
{ public :
    virtual void affiche () = 0 ;
} ;





	 /* d�finition de la classe ens_heter */
#include "ensheter.h"
ens_heter::ens_heter (int dim)
{  nmax = dim ;
   adel = new base * [dim] ;
   nelem = 0 ; 
   courant = 0 ;       // pr�caution
}
ens_heter::~ens_heter ()
{  delete adel ;
}
void ens_heter::ajoute (base & obj)
{  if ((nelem < nmax) && (!appartient (obj))) adel [nelem++] = & obj ;
}
int ens_heter::appartient (base & obj)
{  int trouve = 0 ;
   init () ;
   while ( existe () && !trouve)  if ( &suivant() == & obj) trouve=1 ;
   return trouve ;    
}
int ens_heter::cardinal ()
{   return nelem ;
}

void ens_heter::init ()
{  courant = 0 ; 
}

base & ens_heter::suivant ()
{  if (courant<nelem) return (* adel [courant++]) ;
      // en pratique, il faudrait renvoyer un objet "bidon" si fin ensemble atteinte
}

int ens_heter::existe ()
{   return (courant<nelem) ;
}

void ens_heter::liste ()
{   init () ;
    while ( existe () )
       suivant () . affiche () ;
}



#include "ens_heter.h"
#include "base.h"
#include <iostream>  
using namespace std ;
class point : public base
{   int x, y ;
  public :
    point (int abs=0, int ord=0) 
      { x = abs ; y = ord ;
      }
    void affiche ()
      { cout << "Point de coordonn�es : " << x << " " << y << "\n" ;
      }
} ;

class complexe : public base
{   float re, im ;        
  public :
    complexe (float reel=0.0, float imag=0.0)
      { re = reel ; im = imag ;
      }
    void affiche ()
      {  cout << "Complexe - partie r�elle : " << re 
              << ", partie imaginaire : " << im << "\n" ;
      }
} ;

	 /* utilisation de la classe ens_heter */
main()
{   point p (1,3) ;
    complexe z (0.5, 3) ;
    ens_heter e ;
    cout << "cardinal de e : " << e.cardinal() << "\n" ;
    cout << "contenu de e  \n" ;
    e.liste () ;
    e.ajoute (p) ;
    cout << "cardinal de e : " << e.cardinal() << "\n" ; 
    cout << "contenu de e  \n" ;
    e.liste () ;
    e.ajoute (z) ;
    cout << "cardinal de e : " << e.cardinal() << "\n" ;
    cout << "contenu de e  \n" ;
    e.liste () ;
    e.init () ; int n=0 ;
    while (e.existe()) { e.suivant() ;
                         n++ ;
                       }
    cout << "avec l'it�rateur, on trouve : " << n << " �l�ments\n" ;
}
