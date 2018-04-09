#include <iostream>
#include <set>
#include <string>
using namespace std ;

int main()
{ char t[] = "je me figure ce zouave qui joue du xylophone" ;
  char v[] = "aeiouy" ;
  void affiche (const set<char> &) ;
  set<char> let(t, t+sizeof(t)-1), let_bis ;
  set<char> voy(v, v+sizeof(v)-1) ;

  cout << "lettres presentes         : " ; affiche (let) ;
  cout << "il y a " << let.size() << " lettres differentes\n" ;
  if (let.count('z'))  cout << "la lettre z est presente\n" ;
  if (!let.count('b')) cout << "la lettre b n’est pas presente\n" ;

  let_bis = let ;
  set<char>:: iterator iv ;
  for (iv=voy.begin() ; iv!=voy.end() ; iv++)
    let.erase(*iv) ;
  cout << "lettres sans voyelles     : " ; affiche (let) ;
  let.insert(voy.begin(), voy.end()) ;
  cout << "lettres + toutes voyelles : " ; affiche (let) ;
}

void affiche (const set<char> &e )
{ set<char>::const_iterator ie ;
  for (ie=e.begin() ; ie!=e.end() ; ie++)
    cout << *ie << " " ;
  cout << "\n" ;
}
