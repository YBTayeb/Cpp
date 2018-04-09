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
    void montre() { cout << "Coordonnees ww= " << x << " " << y << endl ; }
    void deltaX (int dx) { x += dx ; }
    void deltaY (int dy) { y += dy ; }
    int getX () { return x ; }
    int getY () { return y ; }
  private :
    int x, y ;
} ;
class PointXAdapte : public Pixel, private PointX // attention : private
{ public :
    PointXAdapte (PointX px) : PointX (px.getX(), px.getY()) { }
    void affiche () { PointX::montre() ; }
    void deplace (int dx, int dy) { deltaX(dx) ; deltaY(dy) ; }
} ;
int main ()
 {  // code existant utilisant déja des implementations de Pixel
    //   .....
    PointX *px = new PointX (3,5) ;
    Pixel *pa = new PointXAdapte (*px) ;
    // il peut maintenant utiliser des objets de type PointX, encapsules dans
    // des objets de type PointXAdapte, comme des implementations de Pixel
    pa->affiche ();
    pa->deplace (2, 1) ;
    pa->affiche () ;
  }


