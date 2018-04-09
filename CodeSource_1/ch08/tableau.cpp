#include <iostream>
using namespace std ;
int main()
{  int i, nbm ;
   float moy, som ;
   float t[10] ;

   for (i=0 ; i<10 ; i++)
      { cout << "donnez la note numero " << i+1 << " : " ;
        cin >> t[i] ;
      }
   for (i=0, som=0 ; i<10 ; i++)  som += t[i] ;
   moy = som / 10 ;
   cout << "Moyenne de la classe : " << moy << "\n" ;
   for (i=0, nbm=0 ; i<10 ; i++ )
       if (t[i] > moy) nbm++ ;
   cout << nbm << " eleves ont plus de cette moyenne" ;
}
