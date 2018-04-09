#include <iostream>
#include <set>
using namespace std ;

int main()
{
  char t[] = "je me figure ce zouave qui joue du xylophone" ;
  char v[] = "aeiouy" ;
  void affiche (const multiset<char> &) ;
  multiset<char> let(t, t+sizeof(t)-1), let_bis ;
  multiset<char> voy(v, v+sizeof(v)-1) ;
  cout << "lettres presentes    : " ; affiche (let) ;
  cout << "il y a " << let.size() << " lettres en tout\n" ;
  cout << "la lettre e est presente " << let.count('e') << " fois\n" ;
  cout << "la lettre b est presente " << let.count('b') << " fois\n" ;
  let_bis = let ;
  multiset<char>:: iterator iv ;
  for (iv=voy.begin() ; iv!=voy.end() ; iv++)
    let.erase(*iv) ;
  cout << "lettres sans voyelles : " ; affiche (let) ;
}

void affiche (const multiset<char> &e )
{ multiset<char>::const_iterator ie ;
  for (ie=e.begin() ; ie!=e.end() ; ie++)
    cout << *ie ;
  cout << "\n" ;
}
