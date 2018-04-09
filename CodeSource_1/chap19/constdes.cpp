#include <iostream>
using namespace std ;

         // ************ classe point *********************
class point
{  
   int x, y ;
  public :
   point (int abs=0, int ord=0)        // constructeur de point ("inline")
     { cout << "++ constr. point :    " << abs << " " << ord << "\n" ;
       x = abs ; y =ord ;
     }
   ~point ()                           // destructeur de point ("inline")
     { cout << "-- destr.  point :    " << x << " " << y << "\n" ;
     }
} ;

         // ************ classe pointcol ******************
class pointcol : public point 
{
   short couleur ;
  public :
   pointcol (int, int, short) ;         // déclaration constructeur pointcol
   ~pointcol ()                         // destructeur de pointcol ("inline")
     { cout << "-- dest. pointcol - couleur : " << couleur << "\n" ;
     }
} ;

pointcol::pointcol (int abs=0, int ord=0, short cl=1) : point (abs, ord)
{ cout << "++ constr. pointcol : " << abs << " " << ord << " " << cl << "\n" ;
  couleur = cl ;
}

         // ************ programme d'essai ****************
int main()   
{  pointcol a(10,15,3) ;              // objets 
   pointcol b (2,3) ;                 // automatiques
   pointcol c (12) ;                  //  .....
   pointcol * adr ;
   adr = new pointcol (12,25) ;       // objet dynamique
   delete adr ;
}
