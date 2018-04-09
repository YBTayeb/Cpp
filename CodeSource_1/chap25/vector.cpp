#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;  

int main()
{ void affiche (const vector<int>) ;
  unsigned int i ;
  int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;
  vector<int> v1(4, 99) ;  // vecteur de 4 entiers egaux à 99
  vector<int> v2(7, 0) ;   // vecteur de 7 entiers 
  vector<int> v3(t, t+6) ; // vecteur construit a partir de t
  cout << "V1 init = " ; affiche(v1)  ;
  for (i=0 ; i<v2.size() ; i++) v2[i] = i*i ;
  v3 = v2 ;
  cout << "V2 = " ; affiche(v2) ;
  cout << "V3 = " ; affiche(v3) ;
  v1.assign (t+1, t+6) ; cout << "v1 apres assign : " ; affiche(v1) ;
  cout << "dernier element de v1 : " << v1.back() << "\n" ;
  v1.push_back(99) ; cout << "v1 apres push_back : " ; affiche(v1) ;
  v2.pop_back() ; cout << "v2 apres pop_back : " ; affiche(v2) ;
  cout << "v1.size() : " << v1.size() << "   v1.capacity() : "
       << v1.capacity() << "   V1.max_size() : " << v1.max_size() << "\n" ;
  vector<int>::iterator iv ;
  iv = find (v1.begin(), v1.end(), 16) ; // recherche de 16 dans v1
  if (iv != v1.end()) v1.insert (iv, v2.begin(), v2.end()) ;
               // attention, ici iv n’est plus utilisable
  cout << "v1 apres insert : " ; affiche(v1) ;
}
void affiche (const vector<int> v) // voir remarque ci-dessous
{ unsigned int i ;
  for (i=0 ; i<v.size() ; i++) cout << v[i] << " " ;
  cout << "\n" ;
}
