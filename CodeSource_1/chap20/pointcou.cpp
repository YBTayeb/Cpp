##include <iostream>
using namespace std ;
class point
{  int x, y ;
  public :
   point (int abs, int ord) 
     { cout << "++ Constr. point \n" ; x=abs ; y=ord ;
     }
   ~point () { cout << "-- Destr. point \n" ; }
   void affiche () const
    { cout << "Coordonnees : " << x << " " << y << "\n" ;
    }
} ;

class coul
{  short couleur ;
  public :
   coul (int cl) 
     { cout << "++ Constr. coul \n" ; couleur = cl ;
     }
   ~coul () { cout << "-- Destr.  coul \n" ; }
   void affiche () const
     { cout << "Couleur : " << couleur << "\n" ;
     }
} ;

class pointcoul : public point, public coul 
{  public :
    pointcoul (int, int, int) ;
    ~pointcoul () { cout << "---- Destr. pointcoul \n" ; }
    void affiche () const
     { point::affiche () ; coul::affiche () ; 
     } 
} ;
pointcoul::pointcoul (int abs, int ord, int cl) : point (abs, ord), coul (cl)
{  cout << "++++ Constr. pointcoul \n" ;
}

int main()
{  pointcoul p(3,9,2) ;
   cout << "------------\n" ;
   p.affiche () ;                 // appel de affiche de pointcoul
   cout << "------------\n" ;
   p.point::affiche () ;          // on force l’appel de affiche de point
   cout << "------------\n" ;
   p.coul::affiche () ;           // on force l’appel de affiche de coul
   cout << "------------\n" ;
}
