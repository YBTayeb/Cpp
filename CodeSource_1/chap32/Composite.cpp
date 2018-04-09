#include <iostream>
#include <vector>
using namespace std ;
class Composant
{ public :
   virtual void ajoute (Composant *c) {}  // par défaut, ne fait rien
   virtual void affiche () = 0 ;  // a redefinir dans chaque classe concrete
   Composant (string nom) { this->nom = nom ; }
   virtual string getNom () { return nom ; }
   virtual ~Composant () {}  // par securite ; voir remarque
  private :
   string nom ;
} ;
class Cercle : public Composant
{ public :
   Cercle (string nom) : Composant (nom) { }
   virtual void affiche () { cout << "Cercle " << getNom() << endl ; }
} ;
class Rectangle : public Composant
{ public :
   Rectangle (string nom) : Composant (nom) { }
   virtual void affiche () { cout << "Rectangle " << getNom() << endl; }
} ;
class Groupe : public Composant
{ public :
  Groupe (string nom) : Composant (nom) { }
  virtual void ajoute (Composant *c) { listeComposants.push_back (c) ; }
  virtual void affiche ()
  { cout << "---- Groupe " << getNom() << " contenant : " << endl ;
    for (int i = 0 ; i<listeComposants.size() ; i++)
     { listeComposants[i]->affiche() ; }
    cout << "-------- fin groupe " << getNom() << endl ;
  }
  private :
    vector<Composant *> listeComposants ;
} ;
int main()
{ Cercle *c1 = new Cercle ("C1") ; Cercle *c2 = new Cercle ("C2") ;
   Rectangle *r1 = new Rectangle ("R1") ;
   c1->affiche () ;
   Groupe *ga = new Groupe ("GA") ; ga->ajoute(c1) ; ga->ajoute(r1) ; ga->affiche () ;
   Groupe *gb = new Groupe ("GB") ; gb->ajoute(ga) ; gb->ajoute(c2) ; gb->affiche () ;
   delete c1 ; delete c2 ; delete r1 ;
   delete ga ; delete gb ;
}


