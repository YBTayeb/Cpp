#include <iostream>
using namespace std ;
    // création d'un patron de fonctions
template <class T> T min (T a, T b)
{   if (a < b) return a ;   // ou return a < b ? a : b ;
          else return b ;
}
   // exemple d'utilisation du patron de fonctions min
int main()
{
   int n=4, p=12 ;
   float x=2.5, y=3.25 ;
   cout << "min (n, p) = " << min (n, p) << "\n" ;  //  int min(int, int)
   cout << "min (x, y) = " << min (x, y) << "\n" ;    //  float min (float, float)
}
