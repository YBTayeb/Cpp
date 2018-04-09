#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{ void affiche (const vector<int> &) ;
  bool comp (int, int) ;
  int t[] = {2, 1, 3, 9, 2, 7, 5, 8} ;
  vector<int> v(t, t+8), v_bis=v ;
  cout << "vecteur initial        : " ; affiche(v) ;
  sort (v.begin(), v.end()) ;
  cout << "apres sort             : " ; affiche(v) ;
  v = v_bis ;
  partial_sort (v.begin(), v.begin()+5, v.end()) ;
  cout << "apres partial_sort (5) : " ; affiche(v) ;
  v = v_bis ;
  nth_element (v.begin(), v.begin()+ 5, v.end()) ;
  cout << "apres nth_element 6    : " ; affiche(v) ;
  nth_element (v.begin(), v.begin()+ 2, v.end()) ;
  cout << "apres nth_element 3    : " ; affiche(v) ;
}
void affiche (const vector<int> &v)
{ unsigned int i ;
  for (i=0 ; i<v.size() ; i++)
    cout << v[i] << " " ;
  cout << "\n" ;
}
