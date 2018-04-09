#include <iostream>
using namespace std ;
class Logo
{ public :
    virtual void affiche () = 0 ;
} ;
class LogoCercle : public Logo
{ public :
    void affiche () { cout << "Logo circulaire" << endl ; }
} ;
class LogoRectangle : public Logo
{ public :
    void affiche () { cout << "Logo rectangle" << endl ; }
} ;
class FabriqueLogoHasard
{ public :
    Logo *getLogo()
    { int n = rand () ;
      if (n < RAND_MAX/2) return new LogoCercle () ;
                     else return new LogoRectangle () ;
    }
} ;



int main () 
{ FabriqueLogoHasard fab  ;
    for (int i = 0 ; i<4 ; i++)
    { Logo *l = fab.getLogo() ;
      l->affiche() ;
      delete l ;
    }
}
