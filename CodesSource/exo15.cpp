#include <iostream>
using namespace std ;
main()
{   int n, p ;

    n=p=0 ;
    while (n<5) n+=2 ; p++ ;
    cout << "A : n = " << n << " p = " << p <<  "\n" ;

    n=p=0 ;
    while (n<5) { n+=2 ; p++ ; }
    cout << "B : n = " << n << " p = " << p << "\n" ;
}