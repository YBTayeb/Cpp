#include <iostream>
using namespace std ;
main()
{  int fct (int) ;   // d�claration de fct ; on pourrait �crire int fct (int x)
   int n, p=5 ;
   n = fct (p) ;
   cout << "p = " << p << " n = " << n ;
}
int fct (int r)
{  return 2*r ;
}


#include <iostream>
using namespace std ;
int fct (int r)
{  return 2*r ;
}
main()
{  int n, p=5 ;
   n = fct (p) ;
   cout << "p = " << p << " n = " << n ;
}
