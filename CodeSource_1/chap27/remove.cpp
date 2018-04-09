#include <iostream>
#include <list>
#include <algorithm>
using namespace std ;
main()
#include <iostream>
#include <list>
#include <algorithm>
using namespace std ;
int main()
{ void affiche(const list<int> &) ;
  bool valeur_paire (int) ;
  int t[] = { 4, 3, 5, 4, 4, 4, 9, 4, 6, 6, 3, 3, 2 } ;
  list<int> l (t, t+sizeof(t)/sizeof(int)) ;
  list<int> l_bis=l ;
  list<int> l2 ;     /* liste vide */
  list<int>::iterator il ;
  cout << "liste initiale                   : " ; affiche(l) ;

  il = remove(l.begin(), l.end(), 4) ;  /* different de l.remove(4) */
  cout << "liste apres remove(4)            : " ; affiche(l) ;
  cout << "element places en fin            : " ;
  for (; il!=l.end() ; il++) cout << *il << " " ; cout << "\n" ;

  l = l_bis ;
  il = unique (l.begin(), l.end()) ;
  cout << "liste apres unique               : " ; affiche(l) ;
  cout << "elements places en fin           : " ;
  for (; il!=l.end() ; il++) cout << *il << " " ; cout << "\n" ;

  l = l_bis ;
  il = remove_if(l.begin(), l.end(), valeur_paire) ;
  cout << "liste apres remove pairs         : " ; affiche(l) ;
  cout << "elements places en fin           : " ;
  for (; il!=l.end() ; il++) cout << *il << " " ; cout << "\n" ;

  /* elimination de valeurs par copie dans liste vide l2 */
  /* par iterateur d’insertion */
  l = l_bis ;
  remove_copy_if(l.begin(), l.end(), front_inserter(l2), valeur_paire) ;
  cout << "liste avec remove_copy_if paires : " ; affiche(l2) ;
}

void affiche(const list<int> &l)
{ list<int>::const_iterator il ;
  for (il=l.begin() ; il!=l.end() ; il++) cout << (*il) << " " ;
  cout << "\n" ;
}
bool valeur_paire (int n)
{ return !(n%2) ;
}
