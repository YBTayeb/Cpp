#include <iostream>
#include <map>
using namespace std ;
int main()
{ void affiche(const map<char, int> &) ;
  map<char, int> m ;
  map<char, int>::iterator im ;
  m['c'] = 10 ; m['f'] = 20 ; m['x'] = 30 ; m['p'] = 40 ;
  cout << "map initial          : " ; affiche(m) ;
  im = m.find ('f') ;    /* ici, on ne verifie pas que im est != m.end() */
  cout << "cle 'f' avant insert : " << (*im).first << "\n" ;
  m.insert (make_pair('a', 5)) ;       /* on insere un element avant ’f’ */
  m.insert (make_pair('t', 7)) ;       /* et un element apres ’f’        */
  cout << "map apres insert     : " ; affiche(m) ;
  cout << "cle 'f' apres insert : " << (*im).first << "\n" ;/* im -> ’f’ */
  m.erase('c') ;
  cout << "map apres erase 'c'  : " ; affiche(m) ;
  im = m.find('p') ; if (im != m.end()) m.erase(im, m.end()) ;
  cout << "map apres erase int  : " ; affiche(m) ;
}
void affiche(const map<char, int> &m) 
{ map<char, int>::const_iterator im ;
  for (im=m.begin() ; im!=m.end() ; im++)
    cout << "(" << (*im).first << "," << (*im).second << ") " ;
  cout << "\n" ;
}

