#include <iostream>
using namespace std ;int 
main()
{  int n = 12000 ;
   cout << "par defaut     : "        << n << "\n" ;
   cout << "en hexadecimal : " << hex << n << "\n" ;
   cout << "en decimal     : " << dec << n << "\n" ;
   cout << "en octal       : " << oct << n << "\n" ;
   cout << "et ensuite     : "        << n << "\n" ;

   bool ok = 1 ;   // ou ok = true 
   cout << "par defaut       : "                << ok << "\n" ;
   cout << "avec noboolalpha : " << noboolalpha << ok << "\n" ;
   cout << "avec boolalpha   : " << boolalpha   << ok << "\n" ;
   cout << "et ensuite       : "                << ok << "\n" ;
}
