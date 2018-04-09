#include <iostream>
using namespace std ;
class Pixel
{ public :
    virtual void affiche () = 0 ;
    virtual void deplace (int dx, int dy) = 0 ;
} ;
class PointX
{ public :
    PointX (int x, int y) { this->x =  x ; this->y = y ; }
    void montre() { cout << "Coordonnees = " << x << " " << y << endl ; }
    void deltaX (int dx) { x += dx ; }
    void deltaY (int dy) { y += dy ; }
  private :
    int x, y ;
} ;
class PointXAdapte : public Pixel
{ public :
    PointXAdapte (PointX *px) { this->px = px ; }
    void affiche () { px->montre() ; }
    void deplace (int dx, int dy) { px->deltaX(dx) ; px->deltaY(dy) ; }
  private :
    PointX *px ;
} ;
int main ()
{ // code existant utilisant deja des implementations de Pixel
  //   .....
  PointX *px = new PointX (2, 5) ;
  Pixel *pxa = new PointXAdapte (px) ;
  // il peut maintenant utiliser des objets de type PointX, encapsules
  // dans des objets de type PointXAdapte, comme des implementations de Pixel :
  pxa->affiche ();
  pxa->deplace (2, 1) ;
  pxa->affiche () ;
}

