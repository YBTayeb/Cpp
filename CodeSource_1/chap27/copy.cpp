#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std ;
int main()
{ int t[5] = { 1, 2, 3, 4, 5 } ;
  vector<int> v(t, t+5) ;    /* v contient : 1, 2, 3, 4, 5   */
  list<int> l(8, 0) ;        /* liste de 8 elements egaux a 0*/
  list<int> l2(3, 0) ;       /* liste de 3 elements egaux a 0 */
  void affiche(const vector<int> &) ;
  void affiche(const list<int> &) ;
  cout << "liste initiale      : " ; affiche(l) ;
  copy (v.begin(), v.end(), l.begin()) ;
  cout << "liste apres copie 1 : " ; affiche(l) ;
  l = l2 ;         /* l contient maintenant 3 elements égaux à 0 */
  copy (v.begin(), v.end(), l.begin()) ; /* sequence trop courte : deconseille */
  cout << "liste apres copie 2 : " ; affiche(l) ;
  l.erase(l.begin(), l.end()) ;                  /* l est maintenant vide */
                                             /* on y insere les elem de v */
  copy (v.begin(), v.end(), inserter(l, l.begin())) ;
  cout << "liste apres copie 3 : " ; affiche(l) ;
}
void affiche(const list<int> &l)
{ list<int>::const_iterator il ;
  for (il=l.begin() ; il!=l.end() ; il++) cout << *il << " " ;
  cout << "\n" ;
}

