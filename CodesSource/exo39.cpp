float somme (float t[], int n)// on peut écrire somme (float * t,... 
                              //   ou encore somme (float t[4], ...  
                              //   mais pas  somme (float t[n], ...  
{   int i ;
    float s = 0 ;
    for (i=0 ; i<n ; i++)
       s += t[i] ;            // on pourrait écrire s += * (t+i) ; 
    return s ;
}



#include <iostream>
using namespace std ;
main()
{
   float somme (float *, int) ;
   float t[4] = {3, 2.5, 5.1, 3.5} ;
   cout << "somme de t : " << somme (t, 4) ;
}