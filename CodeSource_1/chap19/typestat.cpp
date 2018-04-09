#include <iostream>
using namespace std ;
class point
{ protected :            // pour que x et y soient accessibles à pointcol
   int x, y ;
  public :
   point (int abs=0, int ord=0) { x=abs ; y=ord ; }
   void affiche ()
     { cout << "Je suis un point \n" ;
       cout << "   mes coordonnees sont : " << x << " " << y << "\n" ; 
     }
} ;
class pointcol : public point
{ 
   short couleur ;
  public :
   pointcol (int abs=0, int ord=0, short cl=1) : point (abs, ord)
     { couleur = cl ; 
     }
   void affiche ()
     { cout << "Je suis un point colore \n" ;
       cout << "   mes coordonnees sont : " << x << " " << y ;
       cout << "   et ma couleur est :    " << couleur << "\n" ;
     }
} ;
int main()
{  point p(3,5) ; point * adp = &p ;
   pointcol pc (8,6,2) ; pointcol * adpc = &pc ;
   adp->affiche () ; adpc->affiche () ;
   cout << "-----------------\n" ;
   adp = adpc ;             //  adpc = adp serait rejeté
   adp->affiche () ; adpc->affiche () ;
}
