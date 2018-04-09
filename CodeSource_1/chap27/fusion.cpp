#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{ void affiche (const vector<int> &) ;
  int t1[8] = {2, 1, 3, 12, 2, 18, 5, 8} ;
  int t2[5] = {5, 4, 15, 9, 11} ;
  vector<int> v1(t1, t1+8), v2(t2, t2+6), v ;
  cout << "vecteur 1 initial          : " ; affiche(v1) ;
  sort (v1.begin(), v1.end()) ;
  cout << "vecteur 1 trie             : " ; affiche(v1) ;

  cout << "vecteur 2 initial          : " ; affiche(v2) ;
  sort (v2.begin(), v2.end()) ;
  cout << "vecteur 2 trie             : " ; affiche(v2) ;

  merge (v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v)) ;
  cout << "fusion des deux            : " ; affiche(v) ;

  random_shuffle (v.begin(), v.end()) ;  /* v n’est plus ordonne */
  cout << "vecteur v desordonne       : " ; affiche(v) ;
  sort (v.begin(), v.begin()+6) ;        /* tri des premiers elements de v */
  sort (v.begin()+6, v.end()) ;          /* tri des derniers elements de v */
  cout << "vecteur v trie par parties : " ; affiche(v) ;
  inplace_merge (v.begin(), v.begin()+6, v.end()) ; /* fusion interne */
  cout << "vecteur v apres fusion     : " ; affiche(v) ;
}
void affiche (const vector<int> &v)
{ unsigned int i ;
  for (i=0 ; i<v.size() ; i++)
    cout << v[i] << " " ;
  cout << "\n" ;
}
