#include <iostream> 
using namespace std ;

class point
{  int x, y ;
  public :
   point (int abs=0, int ord=0)
     { x = abs ; y = ord ; }
   int abscisse () { return x ; }
   friend ostream & operator << (ostream &, point) ;      // voir note 
   friend istream & operator >> (istream &, point &) ;    // idem 
} ;

ostream & operator << (ostream & sortie, point p)
{ sortie << "<" << p.x << "," << p.y << ">" ;
  return sortie ;
}
istream & operator >> (istream & entree, point & p)
{  char c = '\0' ;
   float x, y ;
   int ok = 1 ;
   entree >> c ;
   if (c != '<') ok = 0 ;
      else
       { entree >> x >> c ;
         if (c != ',') ok = 0 ;
            else
               { entree >> y >> c ;
                 if (c != '>') ok = 0 ;
               }
       }
   if (ok) { p.x = x ; p.y = y ; }         // on n'affecte à p que si tout est OK
      else entree.clear (ios::badbit | entree.rdstate () ) ;
   return entree ;
}




main()
{ char ligne [121] ;
  point a(2,3), b ;
  cout << "point a : " << a << "  point b : " << b << "\n" ;
  do
   { cout << "donnez un point : " ;
     if (cin >> a)  cout << "merci pour le point : " << a << "\n" ;
             else { cout << "** information incorrecte \n" ;
                    cin.clear () ;
                    cin.getline (ligne, 120, '\n') ;
                  }
   }
  while ( a.abscisse () ) ;
}
