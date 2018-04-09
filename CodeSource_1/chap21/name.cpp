#include <iostream>
#include <typeinfo>     // pour typeid
using namespace std ;
class point
{ public :
     virtual void affiche () const
      { }          // ici vide - utile pour le polymorphisme
} ;

class pointcol : public point
{ public :
     void affiche () const
      { }          // ici vide
} ;
int main()
{ point p ; pointcol pc ;
  point * adp ;
  adp = &p ;
  cout << "type de adp  : " << typeid (adp).name()  << "\n" ;
  cout << "type de *adp : " << typeid (*adp).name() << "\n"  ;
  adp = &pc ;
  cout << "type de adp  : " << typeid (adp).name()  << "\n" ;
  cout << "type de *adp : " << typeid (*adp).name() << "\n"  ;
}
