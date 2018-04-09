#include <iostream>
using namespace std ;
class ModeAffichage
{ public :
    virtual void presente (int x, int y) = 0 ;
} ;
class AffichageCourt : public ModeAffichage
{ public :
    void presente (int x, int y)
    { cout << x << " " << y << endl ; }
} ;
class AffichageLong : public ModeAffichage
{ public :
    void presente (int x, int y)
    { cout << "abscisse = " << x << " ordonnee = " << y << endl ; }
} ;
class Point
{ public :
    Point (int x, int y, ModeAffichage *mode)
    { this->x = x ; this->y = y ; this->mode = mode ; }
    void affiche () { mode->presente(x, y) ; }
  private :
    int x, y ;
    ModeAffichage *mode ;   // strategie d'affichage
} ;
int main ()
{ ModeAffichage *court = new AffichageCourt () ;
  Point *p1 = new Point (2, 9, court ) ;
  p1->affiche () ;
  Point *p2 = new Point (4, 7, new AffichageLong () ) ;
  p2->affiche () ;
}
