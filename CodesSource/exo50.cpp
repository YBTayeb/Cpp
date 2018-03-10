void affiche (point courbe [], int np) 
     /* courbe : adresse de la première structure du tableau */
     /*     (on pourrait écrire point * courbe)              */
     /* np : nombre de points de la courbe                   */
{  int i ;
   for (i=0 ; i<np ; i++)
      cout << "point " << courbe[i].c << " de coordonnées " 
           << courbe[i].x << " " << courbe[i].x << "\n" ;
}


void affiche (point * courbe, int np)
{  point * adp ;
   int i ;
   for (i=0, adp=courbe ; i<np ; i++, adp++)
      cout << "point " << (courbe+i)-> c << " de coordonnées "
           << (courbe+i)->x << (courbe+i)->y) ;
}


#include <iostream>
using namespace std ;
const int NP = 4 ; // nombre de points d’une courbe
struct point
   { char c ;
     int x, y ;
   } ;
void affiche (point courbe [], int np)
{
   int i ;
   for (i=0 ; i<np ; i++)
      cout << "point " << courbe[i].c << " de coordonnées "
           << courbe[i].x << " " << courbe[i].x << "\n" ;
}
main()
{  point courbe [NP] ;
   int i ;
   void affiche (point [], int) ;
        /* lecture des différents points de la courbe */
   for (i=0 ; i<NP ; i++)
    {  cout << "nom (1 caractère) et coordonnées point " << i+1 << "\n" ;
       cin >> courbe[i].c >> courbe[i].x >> courbe[i].y ;
    }
    affiche (courbe, NP) ;
}