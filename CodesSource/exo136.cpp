#include <cstdlib>  // pour exit
#include <iostream> 
using namespace std ;
main()
{ int n ; float x ; double z ;
  cout << "donnez un entier : " ;
  cin >> n ;
  try
  { switch (n)
	{ case 1 : throw n ; break ;
	  case 2 : x = n ; throw x ; break ;
	  case 3 : z = n ; throw z ; break ;
    } 
  }
  catch (int n)
  { cout << "catch entier - n = " << n << "\n" ; 
  }
  catch (float x) 
  { cout << "catch flottant - x = " << x << "\n" ;
    exit (-1) ;
  }
  cout << "suite et fin du programme\n" ;
}
