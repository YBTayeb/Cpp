#include <iostream>
using namespace std ;
class A
{ public : A (const A &) { cout << "Constructeur de recopie de A\n" ; }
           A () {}
} ;
class B : public A
{ public : B (const B & b) : A (b) { cout << "CR copy B\n" ; }
           B() {}
} ;
void g (A a) {}   // reçoit une copie
void f (A *ada) { g(*ada) ; }
int main ()
{ B *adb = new B ;
  A *ada = adb ;
  f(ada) ;          // ada pointe sur un objet de type B
}
