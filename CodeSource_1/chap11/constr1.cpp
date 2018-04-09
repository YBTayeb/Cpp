#include <iostream>
using namespace std ;
       /* ------------ Déclaration de la classe point ------------- */
class point
{              /* déclaration des membres privés */
    int x ;
    int y ;
              /* déclaration des membres publics */
 public :
    point (int, int) ;           // constructeur
    void deplace (int, int) ;
    void affiche () ;
} ;
 
    /* ----- Définition des fonctions membre de la classe point ---- */
point::point (int abs, int ord)
{    x = abs ; y = ord ;
}
void point::deplace (int dx, int dy)
{    x = x + dx ; y = y + dy ;
}
void point::affiche ()
{    cout << "Je suis en " << x << " " << y << "\n" ;
}

        /* -------- Utilisation de la classe point -------- */
int main()
{  point a(5,2) ;
   a.affiche () ;
   a.deplace (-2, 4) ;  a.affiche () ;
   point b(1,-1) ;
   b.affiche () ;
} 
