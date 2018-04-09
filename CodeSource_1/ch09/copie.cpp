#include <iostream>
#include <cstring>     // pour strncpy
using namespace std ;
int main()
{  char ch1[20] = "xxxxxxxxxxxxxxxxxxx" ;
   char ch2[20] ;
   cout << "donnez un mot : " ;
   cin >> ch2 ;
   strncpy (ch1, ch2, 6) ;
   cout << ch1 << "\n" ;
}
