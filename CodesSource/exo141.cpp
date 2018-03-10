#include <iostream> 
using namespace std ;
main()
{ void f() ;
  try
  { f() ;
  }
  catch (int n)
  { cout << "except int dans main : " << n << "\n" ;
  }
  catch (...)
  { cout << "exception autre que int dans main \n" ;
  }
  cout << "fin main\n" ;
}
void f()
{
  try
  {	int n=1 ; throw n ;
  }
  catch (int n)
  { cout << "except int dans f : " << n << "\n" ;
    throw ;
  }
}




void f()
{
  try
  {	float x=2.5 ; throw x ;
  }
  catch (int n)
  { cout << "except int dans f : " << n << "\n" ;
    throw ;
  }
}
