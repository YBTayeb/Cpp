#include <iostream>
using namespace std ;
class A
{  public : virtual A & operator = (const A &) { cout << "affectation fictive A\n" ; }
} ;
class B : public A
{ public : virtual  B & operator = (const B &) { cout << "affectation fictive B\n" ; }
} ;
int main ()
{ B *adb1 = new B ;  B *adb2 = new B;
  *adb1 = *adb2 ;
  A *ada1 = new A  ;  A *ada2 = new A ;
  ada1 = adb1 ; ada2 = adb2 ;
  *ada1 = *ada2 ;    // appelle affectation de A - virtual ne sert a rien car
                      // on ne redéfinit pas meme fonction
}
