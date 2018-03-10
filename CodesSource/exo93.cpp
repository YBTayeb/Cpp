#include <stdlib.h>
#include <iostream>  
using namespace std ;
class stack_int
{   int nmax ;                   // nombre maximal de la valeurs de la pile
    int nelem ;                  // nombre courant de valeurs de la pile
    int * adv ;                  // pointeur sur les valeurs
  public :
    stack_int (int = 20) ;            // constructeur
    ~stack_int () ;                   // destructeur
    stack_int (stack_int &) ;         // constructeur par recopie - voir note 
    void operator = (stack_int &) ;   // affectation - voir note 
    stack_int & operator << (int) ;   // opérateur d'empilage
    stack_int & operator >> (int &) ; // opérateur de dépilage (attention int &)
    int operator ++ () ;              // opérateur de test pile pleine
    int operator -- () ;              // opérateur de test pile vide 
} ;



#include "stack-int.h"
stack_int::stack_int (int n)
{   nmax = n ;
    adv = new int [nmax] ;
    nelem = 0 ;
}
stack_int::~stack_int ()
{   delete adv ;
}

stack_int::stack_int (stack_int & p)
{   nmax = p.nmax ; nelem = p.nelem ;
    adv = new int [nmax] ;
    int i ;
    for (i=0 ; i<nelem ; i++)
       adv[i] = p.adv[i] ;
}
void stack_int::operator = (stack_int & p)
{   cout << "*** Tentative d'affectation entre piles - arrêt exécution ***\n" ;
    exit (1) ;
}
stack_int & stack_int::operator << (int n)
{   if (nelem < nmax) adv[nelem++] = n ;
    return (*this) ;
}
stack_int & stack_int::operator >> (int & n)
{   if (nelem > 0) n = adv[--nelem] ;
    return (*this) ;
}
int stack_int::operator ++ ()
{   return  (nelem == nmax) ;
}
int stack_int::operator -- ()
{   return (nelem == 0) ;
}



	 /************ programme d'essai de stack_int *********/
#include "stack_int.h"
#include <iostream>
using namespace std ;
main()
{   void fct (stack_int) ; 
    stack_int pile (40) ;
    cout << "pleine : " << pile++ << " vide : " << pile-- << "\n" ;
    pile << 1 << 2 << 3 << 4 ;
    fct (pile) ;
    int n, p ;
    pile >> n >> p ;     // on dépile 2 valeurs
    cout << "haut de la pile au retour de fct : " << n << " " << p << "\n" ;
    stack_int pileb (25) ;
    pileb = pile ;       // tentative d'affectation
}
void fct (stack_int pl)
{   cout << "haut de la pile reçue par fct : " ;
    int  n, p ;
    pl >> n >> p ;  // on dépile 2 valeurs
    cout << n << " " << p << "\n" ;
    pl << 12 ;      // on en ajoute une
} 
