##include <iostream>
#include <cstdlib>      // pour la fonction rand 
using namespace std ;
class hasard
{  int nbval ;           // nombre de valeurs
   int * val ;           // pointeur sur les valeurs
 public :
   hasard (int, int) ;   // constructeur
   ~hasard () ;          // destructeur
   void affiche () ;   
} ;

hasard::hasard (int nb, int max) 
{  int i ;
   val = new int [nbval = nb] ; 
   for (i=0 ; i<nb ; i++) val[i] = double (rand()) / RAND_MAX * max ;
}

hasard::~hasard ()
{  delete val ;
}

void hasard::affiche ()          // pour afficher les nbavl valeurs
{  int i ;
   for (i=0 ; i<nbval ; i++) cout << val[i] << " " ;
   cout << "\n" ;
}

int main()
{
   hasard suite1 (10, 5) ;       // 10 valeurs entre 0 et 5
   suite1.affiche () ;
   hasard suite2 (6, 12) ;       // 6 valeurs entre 0 et 12
   suite2.affiche () ;
}
