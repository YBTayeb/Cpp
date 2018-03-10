#include <cstdio>
using namespace std ;
const int nb = 10 ;
const int exclus = 5 ;
main()
{
   int valeurs [nb] ;
   int i, nbval = 0 ;
   printf ("donnez %d valeurs :\n", nb) ;
   for (i=0 ; i<nb ; i++) scanf ("%d", &valeurs[i]) ;
   for (i=0 ; i<nb ; i++)
      switch (valeurs[i])
       { case exclus-1 :
         case exclus   :
         case exclus+1 : nbval++ ;  
       }
   printf ("%d valeurs sont interdites", nbval) ;
}

#include <stdio.h>
#define NB 10 
#define EXCLUS 5 
main()
{
   int valeurs [NB] ;
   int i ;
   int nbval=0 ;
   printf ("donnez %d valeurs :\n", NB) ;
   for (i=0 ; i<NB ; i++) scanf ("%d", &valeurs[i]) ;
   for (i=0 ; i<NB ; i++)
      switch (valeurs[i])
       { case EXCLUS-1 :
         case EXCLUS   :
         case EXCLUS+1 : nbval++ ;  
       }
   printf ("%d valeurs sont interdites", nbval) ;
}