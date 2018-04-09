#include <iostream>
using namespace std ;
int main ()
{ int i, j ;
  for (i=1 , j=3 ; i<=5 ; i++, j+=i)
   { cout << "i = " << i << "  j = " << j << "\n" ;
   }
}
