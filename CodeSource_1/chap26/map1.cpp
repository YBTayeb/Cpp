#include <iostream>
#include <map>
using namespace std ;
int main()
{ void affiche (const map<char, int> &) ;  // voir remarque paragraphe 2.4 du chapitre 25
  map<char, int> m ;
  cout << "map initial : " ; affiche(m) ;
  m['S'] = 5 ;   /* la cle S n’existe pas encore, l’element est cree */
  m['C'] = 12 ;  /* idem */
  cout << "map SC      : " ; affiche(m) ;
  cout << "valeur associee a la cle ’S’ : " << m['S'] << "\n" ;
  cout << "valeur associee a la cle ’X’ : " << m['X'] << "\n" ;
  cout << "map X       : " ; affiche(m) ;
  m['S'] = m['c'] ;  /* on a utilise m[’c’] au lieu de m[’C’] ; */
                     /* la cle ’c’ est creee                    */
  cout << "map final   : " ; affiche(m) ;
}
void affiche (const map<char, int> &m)  
{ map<char, int> ::const_iterator im ;
  for (im=m.begin() ; im!=m.end() ; im++)
    cout << "(" << (*im).first << "," << (*im).second << ") " ;
  cout << "\n" ;
}

