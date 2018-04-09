#include <iostream>
#include <algorithm>
using namespace std ;
int main()
{ int t[] = { 5, 1, 8, 0, 9, 4, 6, 3, 4 } ;
  void affiche (const int []) ;
  cout << "sequence t initiale     : " ; affiche (t) ; 
  make_heap (t, t+9) ;  // t est maintenant ordonne en tas
  cout << "tas t initial           : " ; affiche(t) ;
  sort (t, t+9) ;       // t est trie mais n’est plus un tas
  cout << "sequence t triee        : " ; affiche(t) ;
  sort (t, t+9) ;       // resultat incoherent car t n’est plus un tas
  cout << "sequence t triee 2 fois : " ; affiche(t) ;
  make_heap (t, t+9) ;  // t est a nouveau ordonne en tas
  cout << "tas t nouveau           : " ; affiche(t) ;
}
void affiche (const int t[])    // voir remarque paragraphe 2.4 du chapitre 25
{ int i ;
  for (i=0 ; i<9 ; i++) cout << t[i] << " " ;
  cout << "\n" ;
}
