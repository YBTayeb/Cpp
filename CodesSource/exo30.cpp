#include <iostream>
using namespace std ;

int mul2 (int n)
{  if (n%2) return 0 ;
       else return 1 ;
}

int mul3 (int n)
{  if (n%3) return 0 ;
       else return 1 ;
}

main()
{  int mul2 (int) ;
   int mul3 (int) ;
   int n ;
   cout << "donnez un entier : " ;
   cin >> n ;
   if (mul2(n))            cout << "il est pair\n" ;
   if (mul3(n))            cout << "il est multiple de 3\n" ;
   if (mul2(n) && mul3(n)) cout << "il est divisible par 6\n" ;
}