#include <iostream>
using namespace std ;

   // patron numéro I
template <class T> T min (T a, T b)
{  if (a < b) return a ;
         else return b ;
}

   // patron numéro II
template <class T> T min (T * a, T b)
{  if (*a < b) return *a ;
          else return b ;
}

   // patron numéro III
template <class T> T min (T a, T * b)
{  if (a < *b) return a ;
          else return *b ;
}

int main()
{
  int n=12, p=15 ;
  float x=2.5, y=5.2 ;
  cout << min (n, p) << "\n" ;   // patron numéro I    int min (int, int)
  cout << min (&n, p) << "\n" ;  // patron numéro II   int min (int *, int)
  cout << min (x, &y) <<"\n" ;   // patron numéro III  float min (float, float *)
  cout << min (&n, &p) << "\n" ; // patron numéro I    int * min (int *, int *)
}
