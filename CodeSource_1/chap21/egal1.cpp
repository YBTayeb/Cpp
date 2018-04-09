#include <iostream>
#include <typeinfo>     // pour typeid
using namespace std ;

class point
{ public :
     virtual void affiche () const
      { }        // ici vide - utile pour le polymorphisme
} ;

class pointcol : public point
{ public :
     void affiche () const
      { }        // ici vide
} ;

int main()
{ point p1, p2 ;
  pointcol pc ;
  point * adp1, * adp2 ;
  adp1 = &p1 ; adp2 = &p2 ;
  cout << "En A : les objets pointes par adp1 et adp2 sont de " ;
  if (typeid(*adp1) == typeid (*adp2)) cout << "meme type\n" ;
                                  else cout << "type different\n" ;
  adp1 = &p1 ; adp2 = &pc ;
  cout << "En B : les objets pointes par adp1 et adp2 sont de " ;
  if (typeid(*adp1) == typeid (*adp2)) cout << "meme type\n" ;
                                  else cout << "type different\n" ;
}                    
