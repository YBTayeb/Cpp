#include <iostream>
using namespace std ;
#include <string.h>        // pour strcmp
   // patron min
template <class T> T min (T a, T b)
{  if (a < b) return a ; else return b ;
}
   // fonction min pour les chaines
char * min (char * cha, char * chb)
{  if (strcmp (cha, chb) < 0) return cha ;
                         else return chb ;
}
int main()
{ int n=12, p=15 ;
  char * adr1 = "monsieur", * adr2 = "bonjour" ;
  cout << min (n, p) << "\n" ;    // patron   int min (int, int)
  cout << min (adr1, adr2) ;      // fonction char * min (char *, char *)
}
