#include <iostream> 
using namespace std ;
class point
{ int x, y ;
 public :
  point (int abs=0, int ord=0) { x=abs ; y=ord ; }
  virtual void identifie () 
    { cout << "Je suis un point \n" ; 
    }
  void affiche ()
    { identifie () ;
      cout << "Mes coordonn�es sont : " << x << " " << y << "\n" ;
    }
} ;
class pointcol : public point
{ short couleur ;
 public :
  pointcol (int abs=0, int ord=0, int cl=1 ) : point (abs, ord)
    { couleur = cl ; }
  void identifie ()
    { cout << "Je suis un point color� de couleur : " << couleur << "\n" ; 
    }
} ;
main()
{ point p(3,4) ;
  pointcol pc(5,9,5) ;
  p.affiche () ;  
  pc.affiche () ; 
  cout << "---------------\n" ;
  point * adp = &p ; 
  pointcol * adpc = &pc ;
  adp->affiche () ; adpc->affiche () ; 
  cout << "---------------\n" ;
  adp = adpc ;
  adp->affiche () ; adpc->affiche () ;
}
