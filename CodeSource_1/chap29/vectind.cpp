#include <iostream>
#include <iomanip>
#include <valarray>
#include <cstdlib>    // pour size_t
using namespace std ;
int main()
{ size_t ind[] = { 1, 4, 2, 3, 0} ;     
  float tf [] =  { 1.25, 2.5, 5.2, 8.3, 5.4 } ;
  int i ;
  valarray <size_t> indices (ind, 5) ;    // contient 1, 4, 2, 3, 0
  
  for (i=0 ; i<5 ; i++) cout << setw(8) << indices[i] ;  
  cout << "\n" ;
  valarray <float> vf1 (tf, 5), vf2(5) ;
  vf2[indices] = vf1 ;   // affecte vf1[i] à vf2 [indices[i]]
  for (i=0 ; i<5 ; i++) cout << setw(8) << vf2[i] ; 
  cout << "\n" ;
}
