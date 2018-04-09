#include <iostream>
using namespace std ;
       /* ------------ Déclaration du type point ------------- */
struct point
{              /* déclaration "classique" des données */
    int x ;
    int y ;
          /* déclaration des fonctions membres (méthodes) */
    void initialise (int, int) ;
    void deplace (int, int) ;
    void affiche () ;
} ;

     /* ----- Définition des fonctions membres du type point ---- */
void point::initialise (int abs, int ord)
{   x = abs ; y = ord ;
}
void point::deplace (int dx, int dy)
{   x += dx ; y += dy ;
}
void point::affiche ()
{   cout << "Je suis en " << x << " " << y << "\n" ;
}

int main()
{  point a, b ;
   a.initialise (5, 2) ; a.affiche () ;
   a.deplace (-2, 4) ;  a.affiche () ;
   b.initialise (1,-1) ; b.affiche () ;
}
