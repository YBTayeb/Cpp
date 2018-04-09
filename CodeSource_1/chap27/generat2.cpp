#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;


class sequence   /* classe fonction utilisee pour la generation d'entiers */
{ public :
   sequence (int i) { n = i ;}            /* constructeur      */
   int operator() () { return n++ ; }     /* ne pas oublier () */
  private :
   int n ;                          /* valeur courante generee */
} ;

int main()
{ int n = 10 ;
  vector<int> v(n, 0) ;  /* vecteur de n elements initialises a 0 */
  void affiche(const vector<int> &) ;
  cout << "vecteur initial  : " ; affiche(v) ;
  generate (v.begin(), v.end(), sequence(0)) ; 
  cout << "vecteur genere 1 : " ; affiche(v) ;
  generate (v.begin(), v.end(), sequence(4)) ;
  cout << "vecteur genere 2 : " ; affiche(v) ;
}
void affiche (const vector<int> &v)
{ unsigned int i ;
  for (i=0 ; i<v.size() ; i++)
    cout << v[i] << " " ;
  cout << "\n" ;
}