#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{  int n = 12345 ;
   int i ;
   for (i=0 ; i<15 ; i++)
      cout << setw(2) << i << " : "<< setw(i) << n << "\n" ;
}
