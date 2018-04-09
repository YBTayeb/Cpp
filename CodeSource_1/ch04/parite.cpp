#include <iostream>
using namespace std ;
int main()
{  int n ;
   cout << "donnez un entier : " ;
   cin >> n ;
   if ( n & 1 == 1 )
         cout << "il est impair" ;
      else
         cout << "il est pair" ;
}
