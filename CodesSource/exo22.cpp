#include <iostream>
using namespace std ;

main()
{   int note ;      // note "courante"
    int max ;       // note maxi
    int min ;       // note mini
    int nmax ;      // nombre de fois où la note maxi a été trouvée
    
    int nmin ;   // nombre de fois où la note mini a été trouvée
    max = -1 ;   // initialisation max (possible car toutes notes >=0
    min = 21 ;   // initialisation min (possible car toutes notes < 21
    while (cout << "donnez une note (-1 pour finir) : ",
           cin >> note, note >=0)
       { if (note == max) nmax++ ;
         if (note > max) { max = note ;
                           nmax = 1 ;
                         }
         if (note == min) nmin++ ;
         if (note < min) { min = note ;
                           nmin = 1 ;
                         }
       }

    if (max >= 0)
       {  cout << "\nnote maximale : " << max << " attribuée "
               << nmax << " fois\n" ;
          cout << "note minimale : " << min << " attribuée " 
               << nmin << " fois\n" ;
       }
     else cout << "vous n'avez fourni aucune note" ;
}
