#include <iostream>
using namespace std ;
int main ()
{  int i ;
   for ( i=1 ; i<=10 ; i++ )
      { cout << "début tour " << i << "\n" ;
        cout << "bonjour\n" ;
        if ( i==3 ) break ;
        cout << "fin tour " << i << "\n" ;
      }
   cout << "après la boucle\n" ;
}
