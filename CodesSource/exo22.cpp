#include <iostream>
using namespace std ;

main()
{   int note ;      // note "courante"
    int max ;       // note maxi
    int min ;       // note mini
    int nmax ;      // nombre de fois o� la note maxi a �t� trouv�e
    
    int nmin ;   // nombre de fois o� la note mini a �t� trouv�e
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
       {  cout << "\nnote maximale : " << max << " attribu�e "
               << nmax << " fois\n" ;
          cout << "note minimale : " << min << " attribu�e " 
               << nmin << " fois\n" ;
       }
     else cout << "vous n'avez fourni aucune note" ;
}
