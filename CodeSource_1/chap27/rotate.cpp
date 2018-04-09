#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{ void affiche (const vector<int> &) ;
  int t[] = {1, 2, 3, 4, 5, 6, 7, 8} ;
  int decal = 3 ;
  vector<int> v(t, t+8) ;
  cout << "vecteur initial     : " ; affiche(v) ;
  rotate (v.begin(), v.begin()+decal, v.end()) ;
  cout << "vecteur decale de 3 : " ; affiche(v) ;
}
void affiche (const vector<int> &v)
{ unsigned int i ;
  for (i=0 ; i<v.size() ; i++)
    cout << v[i] << " " ;
  cout << "\n" ;
}