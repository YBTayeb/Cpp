#include <iostream>
#include <cstdlib>       // pour exit
using namespace std ;
int main()
{ try
  { void f() ;   
    f() ;
  }
  catch (int)
  { cout << "exception int dans main\n" ;
    exit(-1) ;
  }
}
void f()
{ try
  { int n=2 ;
    throw n ;       // déclenche une exception de type int
  }
  catch (int)
  { cout << "exception int dans f\n" ;
    throw ;
  }
}
