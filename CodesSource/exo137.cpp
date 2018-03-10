#include <iostream> 
using namespace std ;
class erreur
{ public :
   int num ;
} ;
class erreur_d : public erreur 
{ public :
    int code ;
} ;
class A
{ public :
   A(int n) 
   {if (n==1) { erreur_d erd ; erd.num = 999 ;
                erd.code = 12 ; throw erd ; }
   }
} ;

main()
{ 
  try
  { A a(1) ;
    cout << "apres creation a(1)\n" ;
  }



  catch (erreur er)
  { cout << "exception erreur_d : " << er.num << "\n" ;
  }
  catch (erreur_d erd)
  { cout << "exception erreur_d : " << erd.num << " " << erd.code << "\n" ;
  }

  cout << "suite\n" ;
  try
  { A b(1) ;
    cout << "apres creation b(1)\n" ;
  }

  catch (erreur_d erd)
  { cout << "exception erreur_d : " << erd.num << " " << erd.code << "\n" ;
  }
  catch (erreur er)
  { cout << "exception erreur_d : " << er.num << "\n" ;
  }
}
