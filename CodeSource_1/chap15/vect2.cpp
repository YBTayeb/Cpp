#include <iostream>
#include <iostream>
using namespace std ;
class vect
{  int nelem ;
   int * adr ;
 public :
   vect (int n) { adr = new int [nelem=n] ; }
   ~vect () {delete adr ;}
   int & operator [] (int) ;   // attention, pas const voir remarque
} ;
int & vect::operator [] (int i)
{ return adr[i] ;
}
int main()
{  int i ;
   vect a(3), b(3), c(3) ;
   for (i=0 ; i<3 ; i++) {a[i] = i ; b[i] = 2*i ; }
   for (i=0 ; i<3 ; i++) c[i] = a[i]+b[i] ;
   for (i=0 ; i<3 ; i++) cout << c[i] << " " ;
}
