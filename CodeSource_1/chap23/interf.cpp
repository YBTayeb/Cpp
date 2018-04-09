#include <iostream>
using namespace std ;
int main()
{
  void f(int) throw (int) ;
  int n ;
  cout << "entier (0 a 2) : " ; cin >> n ;
  try 
  {  f(n) ;
  }
  catch (int)
  { cout << "exception int dans main\n" ;
  }
  cout << "suite du bloc try du main\n" ;
}

void f(int n) throw (int) 
{ try
   { cout << "n = " << n << "\n" ;
     switch (n) 
     { case 0 : double d ;throw d ;
                break ;
       case 1 : int n ; throw n ;
                break ; 
       case 2 : float f ; throw f ;
                break ;
     }
   }  
   catch (double)
   { cout << "exception double dans f\n" ;
   }
   cout << "suite du bloc try dans f et retour appelant\n" ;
}
