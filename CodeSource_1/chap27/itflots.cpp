#include <iostream>
#include <list>
using namespace std ;
int main()
{ char t[] = {"essai iterateur de flot"} ;
  list<char> l(t, t+sizeof(t)-1) ;
  ostream_iterator<char> flcar(cout) ;
  *flcar = 'x' ; *flcar = '-' ;      
  flcar++ ; flcar++ ; /* pour montrer que l'incrementation est inoperante ici */
  *flcar = ':' ;
  copy (l.begin(), l.end(), flcar) ;
}