#include <iostream>
using namespace std ;
int main()
{  int n ;
   do
      { cout << "donnez un nb>0 : " ;
        cin >> n ;
        if (n<0) { cout << "svp >0\n" ;
                   continue ;
                 }
        cout << "son carré est : " <<  n*n << "\n" ;
      }
   while(n) ;
}
