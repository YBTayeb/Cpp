#include <iostream>
#include <string>
using namespace std ;
int main()
{ string ch ("0123456") ;
  string voy ("aeiou") ;
  char t[] = {"+*-/=<>"} ;
  char * message = "hello" ;
     /* remplace, a partir de indice 2, sur longueur 3, par voy */
  ch.replace (2, 3, voy) ;                                 cout << ch << "\n" ;
     /* remplace, a partir de indice 0 sur longueur 1, par voy,  */
     /*  a partir de indice 2, longueur 3                        */
  ch.replace (0, 1, voy, 1, 2) ;                            cout << ch << "\n" ;
     /* remplace, a partir de indice 1 sur longueur 2, par 8 fois '*' */
  ch.replace (1, 2, 8, '*') ;                               cout << ch << "\n" ;
     /* remplace, a partir de indice 1 sur longueur 2, par 5 fois '#' */
  ch.replace (1, 2, 5, '#') ;                               cout << ch << "\n" ;
     /* remplace, a partir de indice 2, sur longueur 4, par "xxxxxx" */
  ch.replace (2, 4, "xxxxxx" ) ;                            cout << ch << "\n" ;
     /* remplace les 7 derniers caracteres par les 3 premiers de message */
  ch.replace (ch.size()-7, ch.size(), message, 3) ;         cout << ch << "\n" ;
     /* remplace tous les caracteres, sauf le dernier, par (t, t+5) */
  ch.replace (ch.begin(), ch.begin()+ch.size()-1, t, t+5) ; cout << ch << "\n" ;
}