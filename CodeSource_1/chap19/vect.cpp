#include <iostream>
using namespace std ;
// **************** la classe vect **********************************
class vect 
{   int nelem ;                            // nombre d'éléments
    int * adr ;                            // pointeur sur ces éléments
  public :
    vect (int n)                           // constructeur vect
    { adr = new int [nelem = n] ;
      cout << "+ Constr. vect de taille " << n << "\n" ;
    }
    ~vect ()                               // destructeur vect
    { cout << "- Destr. vect " ;
      delete adr ;
    }
    int & operator [] (int) ;
} ;
int & vect::operator [] (int i)
  { return adr[i] ;
  }

// **************** la classe dérivée : vect1 **********************
class vect1 : public vect 
{  int debut, fin ; 
  public :
   vect1 (int d, int f) : vect (f - d + 1)   // constructeur vect1 
     { cout << "++ Constr. vect1 - bornes : " << d << " " << f << "\n" ;
       debut = d ; fin = f ; 
     }
   int & operator [] (int) ;
} ;

int & vect1::operator [] (int i)
  { return vect::operator [] (i-debut) ; }
// **************** un programme d'essai ****************************

int main()
{ const int MIN=15, MAX = 24 ;
  vect1 t(MIN, MAX)  ;
  int i ;
  for (i=MIN ; i<=MAX ; i++) t[i] = i ;
  for (i=MIN ; i<=MAX ; i++) cout << t[i] << " " ;
  cout << "\n" ;
}
