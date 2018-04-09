#include <iostream>
#include <iomanip>
#include <valarray>
using namespace std ;
int main()
{ unsigned int i ;
  int t [] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} ;
  valarray <int> v1 (t, 10), v2  ;
  cout << "v1 initial : " ;
  for (i=0 ; i<v1.size() ; i++) cout << setw(4) << v1[i] ;
  cout << "\n" ;

  v1[slice(0, 4, 2)] = -1 ;   // v1[0] = -1, v1[2] = -1, v1[4] = -1, v1[6] = -1 
  cout << "v1 modifie : " ;
  for (i=0 ; i<v1.size() ; i++) cout << setw(4) << v1[i] ;
  cout << "\n" ;
  
  v2 = v1[slice(1, 3, 4)] ;  // on considère v1[1], v1[5] et v1[9]
  cout << "v2         : " ;
  for (i=0 ; i<v2.size() ; i++) cout << setw(4) << v2[i] ;
  cout << "\n" ;
}