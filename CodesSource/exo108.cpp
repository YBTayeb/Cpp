class vect
{ protected :     // en prévision d'une éventuelle classe dérivée
    int nelem ;        // nombre d'éléments
    int * adr ;        // adresse zone dynamique contenant les éléments
  public :
    vect (int) ;               // constructeur
    ~vect () ;                 // destructeur
    int & operator [] (int) ;  // accès à un élément par son "indice"
} ;
         /**** déclaration de la classe vectok ****/
#include "vect.h"
class vectok : public vect
{        // pas de nouveaux membres donnée
  public :
    vectok (int dim) : vect (dim)   // constructeur de vectok : se contente 
     {}                             // de passer dim au constructeur de vect
    vectok (vectok &) ;             // constructeur par recopie de vectok
    vectok & operator = (vectok &); // surdéfinition de l'affectation de vectok
    int taille () 
       { return nelem ;
       }
} ;
	 /***** définition du constructeur par recopie de vectok *****/
	 // il doit obligatoirement prévoir des arguments pour un constructeur
	 //    (quelconque) de vect (ici le constructeur à un argument)
vectok::vectok (vectok & v) : vect (v.nelem) // ou const vectok & v  
{  int i ;
   for (i=0 ; i<nelem ; i++)  adr[i] = v.adr[i] ;
}
	 /***** définition de l'affectation entre vectok *****/
vectok & vectok::operator = (vectok & v)      // ou const vectok & v
{  if (this != &v)
     { delete adr ;
       adr = new int [nelem = v.nelem] ;
       int i ;
       for (i=0 ; i<nelem ; i++) adr[i] = v.adr[i] ;
     }
   return (*this) ;
}



#include <iostream>  
using namespace std ;
#include "vectok.h"
main()
{  void fct (vectok) ;
   vectok v(6) ;
   int i ;
   for (i=0 ; i<v.taille() ; i++) v[i] = i ;
   cout << "vecteur v : " ;
   for (i=0 ; i<v.taille() ; i++) cout << v[i] << " " ;
   cout << "\n" ;
   vectok w(3) ;
   w = v ;
   cout << "vecteur w : " ;
   for (i=0 ; i<w.taille() ; i++) cout << w[i] << " " ;
   cout << "\n" ;
   fct (v) ;

}
void fct (vectok v)
{  cout << "vecteur reçu par fct : " << "\n" ;
   int i ;
   for (i=0 ; i<v.taille() ; i++) cout << v[i] << " " ;
}
