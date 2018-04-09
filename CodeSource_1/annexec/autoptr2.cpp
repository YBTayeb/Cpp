#include <iostream>
#include <memory>    // pour la classe auto_ptr
using namespace std ;
class point
{
  public :
   int x, y ;    // champs exceptionnellement publics ici
   point(int abs=0, int ord=0) : x(abs), y(ord)
   {cout <<"construction point " << x << " " << y << " " << "\n" ;
   }
   ~point()
   {cout <<"destruction point " << x << " " << y << " " << "\n" ;
   }
   void affiche () { cout << "coordonnees : " << x << " " << y << "\n" ;
   }
} ;

main()
{   auto_ptr<point> ap1 ;
		{  auto_ptr<point> ap2 (new point(1, 2)) ;
       (*ap2).affiche() ;  // ou ap2->affiche() ;		
		ap1 = ap2 ;    // ap1 et ap2 pointe sur le meme point
		               //  mais seul ap1 en est maintenant proprietaire
	    ap2->x=12 ;     // on modifie l'objet par le biais de ap2
    }
// ici ap2 n'existe plus ; une tentative d'utilisation telle
	//  que ap2-> affiche() serait rejetee en compilation
	// mais l'objet pointe n'a pas ete detruit
    ap1->affiche() ;   // ap1 pointe toujours sur le point
}
