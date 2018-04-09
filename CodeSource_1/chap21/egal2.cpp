#include <iostream>
#include <typeinfo>     // pour typeid
using namespace std ;
class point
{ public :
      virtual void affiche () const
        { }          // ici vide
} ;
class pointcol : public point
{ public :
      void affiche () const
        { }          // ici vide
} ;
void fct (point & a, point & b)
{ if (typeid(a) == typeid(b))
             cout << "reference a des objets de meme type \n" ;
        else cout << "reference a des objets de type different \n" ;
}
int main()
{ point p ;
  pointcol pc1, pc2 ;
  cout << "Appel A : " ; fct (p, pc1) ;
  cout << "Appel B : " ; fct (pc1, pc2) ;
}
