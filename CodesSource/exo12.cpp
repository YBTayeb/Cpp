#include <iostream>
using namespace std ;
main()
{  int i, n, som ;
   som = 0 ;
   i = 0 ;                  /* ne pas oublier cette "initialisation" */
   while (i<4)
      { cout << "donnez un entier " ;
        cin >> n ;
        som += n ;
        i++ ;               /* ni cette "incrémentation" */
      }
   cout << "Somme : " << som ;
}



#include <iostream>
using namespace std ;
main()
{  int i, n, som ;
   som = 0 ;
   i = 0 ;                  /* ne pas oublier cette "initialisation" */
   do
      { cout << "donnez un entier " ;
        cin >> n ;
        som += n ;
        i++ ;               /* ni cette "incrémentation" */
      }
   while (i<4) ;            /* attention, ici, toujours <4 */
   cout << "Somme : " << som ;
}