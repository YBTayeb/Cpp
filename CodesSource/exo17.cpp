#include <iostream>
#include <cmath> // pour la d�claration de sqrt
using namespace std ;
main()
{  double x ;
   do
    { cout << "donnez un nombre positif : " ;
      cin >> x ;
      if (x < 0) cout << "svp positif \n" ;
      if (x <=0) continue ;
      cout << "sa racine carr�e est : " << sqrt (x) << "\n" ;
    }
   while (x) ;
}



#include <iostream>
#include <cmath>
using namespace std ;
main()
{  double x ;
   do
     { cout << "donnez un nombre positif : " ;
       cin >> x ;

       if (x<0) { cout << "svp positif \n" ;
                  continue ;
                }
       if (x>0) cout << "sa racine carr�e est : " << sqrt (x) << "\n" ;
     }
   while (x) ;
}



#include <iostream>
#include <cmath>
using namespace std ;
main()
{  double x ;
   do
     { cout <<"donnez un nombre positif : " ;
       cin >> x ;

       if (x < 0) { cout << "svp positif \n" ;
                    continue ;
                  }
       if (x>0) cout << "sa racine carr�e est : " << sqrt (x) << "\n" ;
       if (x==0) break ;
     }
   while (1) ;
}