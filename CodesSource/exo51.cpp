#include <iostream>
using namespace std ;

const int NP = 4 ;            // nombre de points d'une courbe
main()
{  char c [NP] ;                // noms des différents points
   int  x [NP] ;                // abscisses des différents points
   int y  [NP] ;                // ordonnées des différents points
   int i ;

   void affiche (char [], int[], int[], int) ;
        /* lecture des différents points de la courbe */
   for (i=0 ; i<NP ; i++)
   {  cout << "nom (1 caractère) et coordonnées point " 
           <<  i+1 << " :\n" ;
      cin >> c[i] >> x[i] >> y[i] ;
   }
   affiche (c, x, y, NP) ;
}

void affiche (char c[], int x[], int y[], int np)
{    for (int i=0 ; i<np ; i++)
       cout << "point " << c[i] << " de coordonnées " 
            << x[i] << " " <<  y[i] << "\n";
}