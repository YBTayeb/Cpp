#include <iostream>
using namespace std ;
class Forme
{ public :
    void affiche ()   // ici, non virtuelle
    { afficheNature () ;
      cout << "-- Coordonnees = " << x << " " << y << endl ;
      afficheAutresInfos () ;
    }
    virtual void afficheNature () = 0 ;  //a redefinir obligatoirement
    virtual void afficheAutresInfos () { }    // version par defaut si pas redefinie
  protected :
    int x, y ;        // pour eviter pb acces dans classes derivees
} ;
class Point : public Forme
{ public :
    Point (int x, int y) { this->x = x ; this->y = y ; }
    virtual void afficheNature () { cout << "Je suis un Point" << endl ; }
    // ici, on ne redefinit pas afficheAutresInfos
} ;
class Cercle : public Forme
{ public :
    Cercle (int x, int y, double r)
    { this->x = x ; this->y = y ; this->r = r ; }
    virtual void afficheNature () { cout << "Je suis un Cercle" << endl ; }
    virtual void afficheAutresInfos ()
    { cout << "-- Rayon = " << r << endl ; }
  private :
    double r ;
} ;
int main ()
{ Point *p = new Point(2, 5) ;
  p->affiche () ;
  Cercle *c = new Cercle(3, 8, 4.5) ;
  c->affiche () ;
}
