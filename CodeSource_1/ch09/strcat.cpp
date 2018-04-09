#include <iostream>
#include <cstring>        // pour strcat
using namespace std ;
int main()
{  char ch1[50] = "bonjour" ;
   char * ch2 = " monsieur" ;
   cout << "avant : " << ch1 << "\n" ;
   strcat (ch1, ch2) ;
   cout << "apres : " << ch1 ;
}
