#include <iostream>
using namespace std ;
class Affichable
{ public :
    virtual void affiche () = 0 ;
} ;
class Point : public Affichable
{ public :
    Point (int x, int y) { this->x = x ; this->y = y ; }
    void affiche ()
    { cout << "coordonnees = " << x << " " << y << endl ; }
  private :
    int x, y ;
} ;
class Coloration : public Affichable
{ public :
    Coloration (Affichable *p, int c) { this->p = p ; this->c = c ; }
    void affiche ()
    { p->affiche(); cout << "+++ couleur " << c << endl  ; 
    }
  private :
    Affichable *p ;
    int c ;
} ;
class Forme : public Affichable
{ public :
    Forme (Affichable *p, char f) {this->p = p ; this->f = f ; }
    void affiche () 
    { p->affiche() ; cout << "+++ forme " << f << endl ; }
  private :
     Affichable *p ;
     char f ;
} ;
int main ()
{  Affichable *pc = new Coloration (new Point(6, 5), 10) ;
   pc->affiche() ;
   Affichable *pf = new Forme (new Point(1, 4), '*') ;
   pf->affiche () ;
   Affichable *pcf = new Forme (pc, '+') ;
   pcf->affiche () ;
}

