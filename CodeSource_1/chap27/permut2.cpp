#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{ void affiche (const vector<int> &) ;
  int t[] = {2, 1, 3} ;
  int i ;
  vector<int> v(t, t+3) ;
  cout << "vecteur initial : " ; affiche(v) ;
  for (i=0 ; i<=10 ; i++)
  { random_shuffle (v.begin(), v.end()) ;
    cout << "vecteur hasard  : " ; affiche(v) ;
  }
}
void affiche (const vector<int> &v)
{ unsigned int i ;
  for (i=0 ; i<v.size() ; i++)
    cout << v[i] << " " ;
  cout << "\n" ;
}