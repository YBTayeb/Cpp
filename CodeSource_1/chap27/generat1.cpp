#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{ int n = 10 ;
  vector<int> v(n, 0) ;  /* vecteur de n elements initialises a 0 */
  int suite() ;          /* fonction utilisee pour la generation d'entiers */
  void affiche(const vector<int> &) ;
  cout << "vecteur initial : " ; affiche(v) ;
  generate (v.begin(), v.end(), suite) ; 
  cout << "vecteur genere  : " ; affiche(v) ;
}
int suite()
{ static int n = 0 ;
  return n++ ;
}
void affiche (const vector<int> &v)
{ unsigned int i ;
  for (i=0 ; i<v.size() ; i++)
    cout << v[i] << " " ;
  cout << "\n" ;
}