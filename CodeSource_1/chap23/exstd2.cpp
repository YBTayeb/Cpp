#include <iostream>
#include <stdexcept>
using namespace std ;
class mon_exception : public exception 
{ public :
    mon_exception (char * texte) { ad_texte = texte ; }
    const char * what() const throw()
    { return ad_texte ; }
  private :
    char * ad_texte ;
} ;
int main()
{ try
  { cout << "bloc try 1\n" ;
    throw mon_exception ("premier type") ;   
  }
  catch (exception & e) 
  { cout << "exception : " << e.what() << "\n" ;
  }
  try
  { cout << "bloc try 2\n" ;
    throw mon_exception ("deuxieme type") ;   
  }
  catch (exception & e) 
  { cout << "exception : " << e.what() << "\n" ;
  }
}