#include <iostream>
using namespace std ;
   // patron numero I
template <class T> T min (T a, T b)
{   if (a < b) return a ;
         else return b ;
}
   // patron numero II
template <class T> T min (T a, T b, T c)
{
   return min (min (a, b), c) ;
}
int main()
{ int n=12, p=15, q=2 ;
  float x=3.5, y=4.25, z=0.25 ;
  cout << min (n, p) << "\n" ;    // patron I   int min (int, int)
  cout << min (n, p, q) << "\n" ; // patron II  int min (int, int, int)
  cout << min (x, y, z) << "\n" ;   // patron II  float min (float, float, float)
}
