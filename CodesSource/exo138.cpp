class erreur
{ public :
   int num ;
} ;
class A
{ public :
   A(int n) 
   { if (n==1) { erreur er ; er.num = 999 ; throw er ; }
   }
} ;


#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties" du chapitre II
using namespace std ;
main()
{ void f() ;
  try
  { f() ;
  }
  catch (erreur er)
  { cout << "dans main : " << er.num << "\n" ;
  }
  cout << "suite main\n" ;
}
void f()
{ try
  { A a(1) ;
  }
  catch (erreur er)  
  { cout << "dans f : " << er.num << "\n" ;
  }
  cout << "suite f\n" ;
}





void f()
{ try
  { A a(1) ;
  }
  catch (erreur er)  
  { cout << "dans f : " << er.num << "\n" ;
    return ;
  }
  cout << "suite f\n" ;
}




void f()
{  A a(1) ;
}
