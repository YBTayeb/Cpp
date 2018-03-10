#include <iostream>
using namespace std ;

void f1 (void)
{  cout << "bonjour\n" ;
}

void f2 (int n)
{  int i ;
   for (i=0 ; i<n ; i++)
       cout << "bonjour\n" ;
}

int f3 (int n)
{  int i ;
   for (i=0 ; i<n ; i++)
       cout << "bonjour\n" ;
   return 0 ;
}

main()
{  void f1 (void) ;
   void f2 (int) ;
   int f3 (int) ;
   f1 () ;
   f2 (3) ;
   f3 (3) ;
}
