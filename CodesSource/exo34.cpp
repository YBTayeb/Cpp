#include <stdio.h>

#include <iostream>
using namespace std ;

main()
{
   int t [3] ;
   int i, j ;
   int * adt ;

   for (i=0, j=0 ; i<3 ; i++) t[i] = j++ + i ;                /* 1 */

   for (i=0 ; i<3 ; i++) cout << t[i] << " " ;                /* 2 */
   cout << "\n" ;

   for (i=0 ; i<3 ; i++) cout << *(t+i) << " " ;              /* 3 */
   printf ("\n") ;

   for (adt = t ; adt < t+3 ; adt++) cout << *adt << " "  ;   /* 4 */
   cout << "\n" ;

   for (adt = t+2 ; adt>=t ; adt--) cout << *adt << " ";      /* 5 */
   cout << "\n" ;
}