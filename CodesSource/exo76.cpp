#include <iostream>  
using namespace std ;
class point
{   int num;
    static int nb_points ;
  public :
    point ()
       {  num = ++nb_points ;
          cout << "cr�ation point num�ro    : " << num << "\n" ;
       }
    ~point ()
       {  cout << "Destruction point num�ro : " << num << "\n" ;
       }
} ;
int point::nb_points=0 ;     // initialisation obligatoire

main()
{  point * adcourb = new point [4] ;
   delete [] adcourb ;
}
