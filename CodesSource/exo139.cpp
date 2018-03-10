#include <iostream> 
using namespace std ;
class A
{ public :
   A(int n) 
   { try
     { if (n==1) throw n ; 
     }
     catch (int n)
     { cout << "dans constructeur A : " << n << "\n" ;
       throw ;
     }
   }
} ;

main()
{ void f() ;
  try
  { f() ;
  }
  catch (int n)
  { cout << "dans main : " << n << "\n" ;
  }
  cout << "fin main\n" ;
}
void f()
{
  try
  { A a(1) ;
  }

  catch (int n)  
  { cout << "dans f : " << n << "\n" ;
    throw ;
  }
  cout << "suite f\n" ;
}
