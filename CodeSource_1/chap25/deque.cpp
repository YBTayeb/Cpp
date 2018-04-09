#include <iostream>
#include <deque>
#include <algorithm>
using namespace std ;
int main()
{  void affiche (const deque<char> &) ;
   char mot[] = {"xyz"} ;
   deque<char> pile(mot, mot+3) ; affiche(pile) ;
   pile.push_front('a') ;         affiche(pile) ;
   pile[2] ='+';
   pile.push_front ('b') ;
   pile.pop_back() ;              affiche(pile) ;
   deque<char>::iterator ip ;
   ip = find (pile.begin(), pile.end(), 'x');
   pile.erase(pile.begin(), ip) ; affiche(pile) ;
}
void affiche (const deque<char> &p)  
{  for (unsigned int i=0 ; i<p.size() ; i++) cout << p[i] << " " ;
   cout << "\n" ;
}

