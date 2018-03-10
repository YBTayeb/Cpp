	  /*  fichier SETINT.H  : déclaration de la classe set_int */ 
#include <iostream>  
using namespace std ;
class set_int
{  int * adval ;                             // adresse du tableau des valeurs
   int nmax ;                                // nombre maxi d'éléments
   int nelem ;                               // nombre courant d'éléments
 public :
   set_int (int = 20) ;                      // constructeur
   set_int (set_int &) ;                     // constructeur par recopie  
   set_int & operator = (set_int &) ;        // opérateur d'affectation 
   ~set_int () ;                             // destructeur
   int cardinal () ;                         // cardinal de l'ensemble
   set_int & operator << (int) ;             // ajout d'un élément
   friend int operator % (int, set_int &) ;  // appartenance d'un élément 
 		  	        // envoi ensemble dans un flot 
   friend ostream & operator << (ostream &, set_int &) ;
} ;


#include "setint.h"
#include <iostream>  
using namespace std ;
	 /*************** constructeur ********************/
set_int::set_int (int dim)
{  adval = new int [nmax = dim] ;    // allocation tableau de valeurs
   nelem = 0 ;
}
	 /****************** destructeur ******************/
set_int::~set_int ()
{  delete adval ;                    // libération tableau de valeurs
}
 /********** constructeur par recopie *************/
set_int::set_int (set_int & e)  
{  adval = new int [nmax = e.nmax] ;   // allocation nouveau tableau
   nelem = e.nelem ;                 
   int i ;
   for (i=0 ; i<nelem ; i++)           // copie ancien tableau dans nouveau
	adval[i] = e.adval[i] ;  
}
	 /************ opérateur d'affectation ************/
set_int & set_int::operator = (set_int & e) //commentaires fait pour   b = a
{  if (this != &e)                       // on ne fait rien pour a = a
     { delete adval ;                    // libération partie dynamique de b
       adval = new int [nmax = e.nmax] ; // allocation nouvel ensemble pour a
       nelem = e.nelem ;                 //      dans lequel on recopie
       int i ;                           //      entièrement l'ensemble b
       for (i=0 ; i<nelem ; i++)         //      avec sa partie dynamique
          adval[i] = e.adval[i] ;
     }
   return * this ;
}
	 /************ fonction membre cardinal ***********/
int set_int::cardinal ()
{  return nelem ;
}     
	 /************ opérateur d'ajout << ***************/
set_int & set_int::operator << (int nb)
{        // on examine si nb appartient déjà à l'ensemble
         //   en utilisant l'opérateur %
         // s'il n'y appartient pas, et s'il y a encore de la place
         //   on l'ajoute à l'ensemble
   if ( ! (nb % *this) && nelem < nmax )  adval [nelem++] = nb ;
   return (*this) ;
}

	 /*********** opérateur d'appartenance % **********/
int operator % (int nb, set_int & e)
{  int i=0 ;
         // on examine si nb appartient déjà à l'ensemble
         //  (dans ce cas i vaudra nele en fin de boucle)
   while ( (i<e.nelem) && (e.adval[i] != nb) ) i++ ;
   return (i<e.nelem) ;
}

	 /****** opérateur <<  pour sortie sur un flot *****/
ostream & operator << (ostream & sortie, set_int & e) 
{  sortie << "[ " ;
   int i ;
   for (i=0 ; i<e.nelem ; i++)
      sortie << e.adval[i] << " " ;
   sortie << "]" ;
   return sortie ;
}




	 /************* test de la classe set_int *********/
#include "setint.h"
#include <iostream>  
using namespace std ;
main()
{  void fct (set_int) ;
   void fctref (set_int &) ;
   set_int ens ;
   cout << "donnez 10 entiers \n" ;
   int i, n ;
   for (i=0 ; i<10 ; i++)
      { cin >> n ;
        ens << n ;
      }
   cout << "il y a : " << ens.cardinal () << " entiers différents\n" ;
   cout << "qui forment l\'ensemble : " << ens << "\n" ;
   fct (ens) ;
   cout << "au retour de fct, il y en a " << ens.cardinal () << "\n" ;
   cout << "qui forment l\'ensemble : " << ens << "\n" ;
   fctref (ens) ;
   cout << "au retour de fctref, il y en a " << ens.cardinal () << "\n" ;
   cout << "qui forment l\'ensemble : " << ens << "\n" ;
   cout << "appartenance de -1  : " <<  -1 % ens << "\n" ;
   cout << "appartenance de 500 : " << 500 % ens << "\n" ;
   set_int ensa, ensb ;
   ensa = ensb = ens ;
   cout << "ensemble a : " << ensa << "\n" ;
   cout << "ensemble b : " << ensb << "\n" ;
}

void fct (set_int e)
{  cout << "ensemble reçu par fct : " << e << "\n" ;
   e << -1 << -2 << -3 ;
}

void fctref (set_int & e) 
{  cout << "ensemble reçu par fctref : " << e << "\n" ;
   e << -1 << -2 << -3 ;
}
