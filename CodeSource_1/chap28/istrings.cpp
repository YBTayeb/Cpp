#include <iostream>
#include <sstream>
using namespace std ;
int main()
{ string ch = "123 45.2 salut" ;
  istringstream entree (ch) ;
  int n ;
  float x ;
  string s ;
  entree >> n >> x >> s ;
  cout << "n = " << n << " x = " << x << " s = " << s << "\n" ;
  if (entree >> s) cout << " s = " << s << "\n" ;
              else cout << "fin flot entree\n" ;
}