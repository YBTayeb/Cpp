#include <iostream>
using namespace std ;

       /* ------------ Déclaration de la classe point ------------- */
class point
{              /* déclaration des membres privés */
  private :
    int x ;
    int y ;
              /* déclaration des membres publics */
  public :
    void initialise (int, int) ;
    void deplace (int, int) ;
    void affiche () ;
} ;

     /* ----- Définition des fonctions membres de la classe point ---- */
void point::initialise (int abs, int ord)
{    
    x = abs ; y = ord ;
}
void point::deplace (int dx, int dy)
{  
    x = x + dx ; y = y + dy ;
}
void point::affiche () const
{
    cout << "Je suis en " << x << " " << y << "\n" ;
}
