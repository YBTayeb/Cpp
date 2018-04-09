#include <iostream>
using namespace std ;

  // patron I
template <class T> T min (T a, T b)
{  if (a < b) return a ;
         else return b ;
}
  // patron II
template <class T> T min (T * t, int n)
{  int i ;
   T min = t[0] ;
   for (i=1 ; i<n ; i++) if (t[i] < min) min=t[i] ;
   return min ;
}

int main()
{  long n=2, p=12 ;
   float t[6] = {2.5, 3.2, 1.5, 3.8, 1.1, 2.8} ; 
   cout << min (n, p) << "\n" ;     // patron I    long min (long, long)
   cout << min (t, 6) << "\n" ;     // patron II   float min (float *, int)
}
