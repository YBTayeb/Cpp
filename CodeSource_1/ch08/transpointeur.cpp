#include <iostream>
using namespace std ;
int main()
{  void echange (int *ad1, int *ad2) ;
   int a=10, b=20 ;
   cout << "avant appel : " << a << " " << b  << "\n" ;
   echange (&a, &b) ;
   cout << "apres appel : " << a << " " << b  << "\n" ;
}
void echange (int *ad1, int *ad2)
{  int x ;
   x = *ad1 ;
   *ad1 = *ad2 ;
   *ad2 = x ;
}
