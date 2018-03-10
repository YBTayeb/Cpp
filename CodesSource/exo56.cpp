#include <iostream>  
using namespace std ;
main()
{ void echange (int *, int *) ;      // prototype de la fonction echange
  int n=15, p=23 ;
  cout << "avant : " << n << " " << p << "\n" ;
  echange (&n, &p) ;
  cout << "après : " << n << " " << p << "\n" ;
}
void echange (int * a, int * b)
{ int c ;   // pour la permutation
  c = *a ; 
  *a = *b ;
  *b = c ;
}



#include <iostream>  
using namespace std ;
main()
{ void echange (int &, int &) ;    // prototype de la fonction echange
  int n=15, p=23 ;
  cout << "avant : " << n << " " << p << "\n" ;
  echange (n, p) ;                 // attention n et non &n, p et non &p
  cout << "après : " << n << " " << p << "\n" ;
}
void echange (int & a, int & b)
{ int c ;   // pour la permutation
  c = a ; 
  a = b ;
  b = c ;
}