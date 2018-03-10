#include <iostream> 
using namespace std ;
main()
{ int n ;
  cout << "donnez un entier : " ;
  cin >> n ;
  try
  { cout << "debut premier bloc try\n" ;
    if (n) throw n ;
    cout << "fin premier bloc try\n" ;
  }
  catch (int n)
  { cout << "catch 1 - n = " << n << "\n" ; 
  }

  cout << "suite programme\n" ;
  try
  { cout << "debut second bloc try\n" ;
    throw n ;
    cout << "fin second bloc try\n" ;
  }
  catch (int n) 
  { cout << "catch 2 - n = " << n << "\n" ; 
  }
  cout << "fin programme\n" ;
}
