#include <iostream>  
using namespace std ;
class point
{   int num;
    static int nb_points ;
  public :
    point ()
       {  num = ++nb_points ;
          cout << "création point numéro    : " << num << "\n" ;
       }
    ~point ()
       {  cout << "Destruction point numéro : " << num << "\n" ;
       }
} ;
int point::nb_points=0 ;     // initialisation obligatoire

main()
{  point * adcourb = new point [4] ;
   delete [] adcourb ;
}
