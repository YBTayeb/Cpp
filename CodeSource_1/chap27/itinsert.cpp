#include <iostream>
#include <list>
#include <algorithm>
using namespace std ;
int main()
{ void affiche (const list<char> &) ;
  char t[] = {"essai insert_iterator"} ;
  list<char> l1(t, t+sizeof(t)-1) ;
  list<char> l2 (4, 'x') ;
  list<char> l3 ;
  cout << "l1 initiale            : " ; affiche(l1) ;
  cout << "l2 initiale            : " ; affiche(l2) ;
       /* copie avec liste l2 de taille insuffisante */
       /* deconseille en pratique                    */
  copy (l1.begin(), l1.end(), l2.begin()) ;     
  cout << "l2 apres copie usuelle : " ; affiche(l2) ;
      /* insertion dans liste non vide                 */
      /* on pourrait utiliser aussi front_inserter(l2) */
  copy (l1.begin(), l1.end(), inserter(l2, l2.begin())) ;  
  cout << "l2 apres copie inser   : " ; affiche(l2) ;     
     /* insertion dans liste vide ; on pourrait utiliser aussi */
     /* front_inserter(l3) ou back_inserter(l3)                */
  copy (l1.begin(), l1.end(), inserter(l3, l3.begin())) ;  
  cout << "l3 apres copie inser   : " ; affiche(l3) ;      
}
void affiche (const list<char> &l)
{ void af_car (char) ;
  for_each(l.begin(), l.end(), af_car); /* appelle af_car pour chaque element */
  cout << "\n" ;
}
void af_car (char c)
{ cout << c << " " ;
}