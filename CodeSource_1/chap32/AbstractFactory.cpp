#include <iostream>
using namespace std ;
class BoutonRadio   // classe abstraite pour les boutons radio
{ public :
    virtual string type ()= 0 ;
} ;
class BoutonRadioA : public BoutonRadio
{ public :
    string type () { return "Bouton radio Style A" ; }
} ;
class BoutonRadioB : public BoutonRadio
{ public :
    string type () { return "Bouton radio style B" ; }
} ;
class CaseCocher   // classe abstraite pour les cases a cocher
{ public :
    virtual string identification () = 0 ;
} ;
class CaseCocherA : public CaseCocher
{ public :
    string identification () { return "Case a cocher style A" ; }
} ;
class CaseCocherB : public CaseCocher
{ public :
    string identification () { return "Case a cocher style B" ; }
} ;
class FabriqueAbstraite   // classe abstraite pour les fabriques
{ public :
    virtual BoutonRadio *creerBoutonRadio () = 0 ;
    virtual CaseCocher  *creerCaseCocher () = 0 ;
} ;
class FabriqueStyleA : public FabriqueAbstraite
{ public :
    BoutonRadio *creerBoutonRadio ()  { return new BoutonRadioA ()  ; }
    CaseCocher  *creerCaseCocher ()   { return new CaseCocherA () ; }
} ;
class FabriqueStyleB : public FabriqueAbstraite
{ public :
    BoutonRadio *creerBoutonRadio ()  { return new BoutonRadioB () ; }
    CaseCocher  *creerCaseCocher ()   { return new CaseCocherB () ; }
} ;
int main ()
{ BoutonRadio *br1, *br2 ;
  CaseCocher *cc ;
  FabriqueAbstraite *f  = new FabriqueStyleA() ; // choix de la fabrique
  br1 = f->creerBoutonRadio () ; cout << br1->type () << endl ;
  cc  = f->creerCaseCocher ()  ; cout << cc->identification () << endl ;
  br2 = f->creerBoutonRadio () ; cout << br2->type () << endl ;
  delete br1 ; delete cc ; delete br2 ;
  delete f ;
}

