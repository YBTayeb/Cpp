#include <iostream>
using namespace std ;
template <class T> T min (T a, T b)
{  if (a < b) return a ;   // ou return a < b ? a : b ;
         else return b ;
}
int main()
{
   char * adr1 = "monsieur", * adr2 = "bonjour" ;
   cout << "min (adr1, adr2) = " << min (adr1, adr2) ;
}
