#include <iostream>
#include <typeinfo>     // pour typeid
using namespace std ;
class A
{ public :
    virtual void affiche () const  // vide ici - utile pour le polymorphisme
     { }
} ;
class B : public A
{ public :
    void affiche () const
     { }
} ;
class C : public B
{ public :
    void affiche () const
     { }
} ;
int main()
{ A a ; B b ; C c ;
  A * ada, * ada1 ;
  B * adb, * adb1 ;
  C * adc ;
  ada = &a ;    // ada de type A* pointe sur un A ;
                //  sa conversion dynamique en B* ne marche pas
  adb =  dynamic_cast <B *> (ada) ; cout << "dc <B*>(ada) " << adb << "\n" ;
  ada = &b ;    // ada de type A* pointe sur un B ;
                // sa conversion dynamique en B* marche
  adb =  dynamic_cast <B *> (ada) ; cout << "dc <B*> ada " << adb << "\n" ;
               // sa conversion dynamique en A* marche
  ada1 = dynamic_cast <A*> (ada) ; cout << "dc <A*> ada " << ada1 << "\n" ;
               // mais sa conversion dynamique en C* ne marche pas
  adc =  dynamic_cast <C *> (ada) ; cout << "dc <C*> ada " << adc << "\n" ;
  adb = &b ;    // adb de type B* pointe sur un B
                // sa conversion dynamique en A* marche
  ada1 = dynamic_cast <A *> (adb) ; cout << "dc <A*> adb " << ada1 << "\n" ;
                // sa conversion dynamique en B* marche
  adb1 = dynamic_cast <B *> (adb) ; cout << "dc <A*> adb1 " << adb1 << "\n" ;
                // mais sa conversion dynamique en C* ne marche pas
  adc =  dynamic_cast <C *> (adb) ; cout << "dc <C*> adb1 " << adc << "\n" ;
}
