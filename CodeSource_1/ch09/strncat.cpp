#include <iostream>
#include <cstring>          // pour strncat
using namespace std ;
int main()
{  char ch1[50] = "bonjour" ;
   char * ch2 = " monsieur" ;
   cout << "avant : " << ch1 << "\n" ;
   strncat (ch1, ch2, 6) ;
   cout << "apres : " << ch1 << "\n" ;
}
