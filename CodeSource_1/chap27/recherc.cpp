#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{ char *ch1 = "anticonstitutionnellement" ;
  char *ch2 = "uoie" ;
  char *ch3 = "tion" ;
  vector<char> v1 (ch1, ch1+strlen(ch1)) ;
  vector<char> v2 (ch2, ch2+strlen(ch2)) ;
  vector<char>::iterator iv ;
  iv = find_first_of (v1.begin(), v1.end(), v2.begin(), v2.end()) ;
  cout << "\npremier de uoie en : " ; for ( ; iv!=v1.end() ; iv++) cout << *iv ;
  iv = find_first_of (v1.begin(), v1.end(), v2.begin(), v2.begin()+2) ;
  cout << "\npremier de uo en   : " ; for ( ; iv!=v1.end() ; iv++) cout << *iv ;
  v2.assign (ch3, ch3+strlen(ch3)) ;
  iv = search (v1.begin(), v1.end(), v2.begin(), v2.end()) ;
  cout << "\ntion en            : " ; for ( ; iv!=v1.end() ; iv++) cout << *iv ;
  iv = search_n(v1.begin(), v1.end(), 2, 'l' ) ;
  cout << "\n'l' 2 fois en      : " ; for ( ; iv!=v1.end() ; iv++) cout << *iv ;
  iv = adjacent_find(v1.begin(), v1.end()) ;
  cout << "\npremier doublon en : " ; for ( ; iv!=v1.end() ; iv++) cout << *iv ;
}