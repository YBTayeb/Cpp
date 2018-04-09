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
    void affiche () { cout << "Logo rectangle" << endl  ; }
} ;
class FabriqueLogo
{ public :
    virtual Logo *getLogo() = 0 ;
} ;
class FabriqueLogoHasard : public FabriqueLogo
{ public :
    Logo *getLogo()
    { int n = rand () ;
      if (n < RAND_MAX/2) return new LogoCercle () ;
                     else return new LogoRectangle () ;
    }
} ;
class FabriqueLogoAlternes : public FabriqueLogo
{ public :
    Logo *getLogo ()
    {  if (indic) { indic = false ; return new LogoCercle() ; }
             else { indic = true ;  return new LogoRectangle () ; }
    }
  private :
    static bool indic ;
} ;
bool FabriqueLogoAlternes::indic = false ;    // initialisation membre statique
int main ()
{ FabriqueLogo *fab  ;
  fab = new FabriqueLogoHasard () ;
  cout << "--- avec Fabrique au hasard" << endl ;
  for (int i = 0 ; i<3 ; i++)
  { Logo *l = fab->getLogo() ;
    l->affiche();
    delete l ;
  }
  fab = new FabriqueLogoAlternes () ;
  cout << "--- avec Fabrique alternee" << endl ;
  for (int i = 0 ; i<3 ; i++)
  { Logo *l = fab->getLogo() ;
    l->affiche(); delete l ;
  }
}
