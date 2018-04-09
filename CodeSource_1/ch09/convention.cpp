#include <iostream>
using namespace std ;
int main()
{ char * adr ;
  adr = "bonjour" ;
  while (*adr)
  { cout << *adr ;
    adr++ ;
  }
}
