#include <iostream>
using namespace std ;

main()
{   const int NVAL = 10 ;               /* nombre de valeurs du tableau */
    int i, min, max ;
    int t[NVAL] ;

    cout << "donnez " << NVAL << " valeurs\n"  ;
    for (i=0 ; i<NVAL ; i++) cin >> t[i] ;

    max = min = t[0] ;
    for (i=1 ; i<NVAL ; i++)
      { if (t[i] > max) max = t[i] ;  /* ou max = t[i]>max ? t[i] : max */
        if (t[i] < min) min = t[i] ;  /* ou min = t[i]<min ? t[i] : min */
      }

    cout << "valeur max : " << max << "\n" ;
    cout << "valeur min : " << min << "\n" ;
}


#include <iostream>
using namespace std ;

main()
{   const int NVAL = 10 ;               /* nombre de valeurs du tableau */
    int i, min, max ;
    int t[NVAL] ;

    cout << "donnez " << NVAL << " valeurs\n"  ;
    for (i=0 ; i<NVAL ; i++) cin >> *(t+i) ;

    max = min = *t ;
    for (i=1 ; i<NVAL ; i++)
      { if ( *(t+i) > max) max = *(t+i) ;
        if ( *(t+i) < min) min = *(t+i) ;
      }

    cout << "valeur max : " << max << "\n" ;
    cout << "valeur min : " << min << "\n" ;
}