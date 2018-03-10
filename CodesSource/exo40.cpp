void maxmin (int t[], int n, int & admax, int & admin)
{   int i ;
    admax = t[1] ;
    admin = t[1] ;
    for (i=1 ; i<n ; i++)        
       { if (t[i] > admax) admax = t[i] ;
         if (t[i] < admin) admin = t[i] ;
       }
}



  void maxmin (int t[], int n, int * admax, int * admin)
  {   int i ;
      *admax = t[1] ;
      *admin = t[1] ;
      for (i=1 ; i<n ; i++)        
         { if (t[i] > *admax) *admax = t[i] ;
           if (t[i] < *admin) *admin = t[i] ;
         }
  }


  void maxmin (int t[], int n, int * admax, int * admin)
  {  int i, max, min ;
     max = t[1] ;
     min = t[1] ;
     for (i=1 ; i<n ; i++)
        {  if (t[i] > max) max = t[i] ;
           if (t[i] < min) min = t[i] ;
        }
     *admax = max ;
     *admin = min ; 
  } 


#include <iostream>
using namespace std ;
main()
{  void maxmin (int [], int, int &, int &) ;
   int t[8] = { 2, 5, 7, 2, 9, 3, 9, 4} ;
   int max, min ;
   maxmin (t, 8, max, min) ;
   cout << "valeur maxi : " << max << "\n" ;
   cout << "valeur mini : " << min << "\n" ;
}


#include <iostream>
using namespace std ;
main()
{  void maxmin (int [], int, int *, int *) ;
   int t[8] = { 2, 5, 7, 2, 9, 3, 9, 4} ;
   int max, min ;
   maxmin (t, 8, &max, &min) ;
   cout << "valeur maxi : " << max << "\n" ;
   cout << "valeur mini : " << min << "\n" ;
}
