#include <iostream>
#include <vector>
using namespace std ;
main()
{  void affiche (vector<int>) ;
   int i ; 
   vector<int> v1(5), v2(10) ;
   for (i=0 ; i<5 ; i++) v1[i] = i ; 
   cout << "v1 = " ; affiche(v1) ;
   for (i=0 ; i<10 ; i++) v2[i] = i*i ;
   cout << "v2 = " ; affiche(v2);
   v1 = v2 ;
   cout << "v1 = " ; affiche(v1) ;
   vector<int> v3 = v1 ;
   cout << "v3 = " ; affiche(v3) ;
   vector<int> v4 = v2 ; 
   cout << "v4 = " ; affiche(v4) ;
   // const vector<int> w(3) ; w[2] = 5 ;  // conduit bien à erreur compilation
}
void affiche (vector<int> v) 
{ vector<int>::iterator iv ;
  for (iv=v.begin() ; iv !=v.end() ; iv++)
	cout << *iv << " " ;
  cout << "\n" ;
}



#include <iostream> 
#include <vector>
using namespace std ;
class vect : public vector<int>
{ public :
    vect(int n) : vector<int>(n) {}    // indispensable !!!!!!!
    friend ostream & operator << (ostream &, vect &) ;
} ;
ostream & operator << (ostream & sortie, vect & v)  // voir note  
{ sortie << "<" ;
  vector<int>::iterator iv ;
  for (iv=v.begin() ; iv!=v.end(); iv++) sortie << *iv << " " ;
  sortie << ">" ;
  return sortie ;
}

main()
{  int i ;
   vect v1(5), v2(10) ;
   for (i=0 ; i<5 ; i++) v1[i] = i ;
   cout << "v1 = " << v1 << "\n" ;
   for (i=0 ; i<10 ; i++) v2[i] = i*i ;
   cout << "v2 = " << v2 << "\n" ;
   v1 = v2 ;
   cout << "v1 = " << v1 << "\n" ;
   vect v3 = v1 ;
   cout << "v3 = " << v3 << "\n" ;
   vect v4 = v2 ;
   cout << "v4 = " << v4 << "\n" ;
   // const vect w(3) ; w[2] = 5 ;  // conduit bien à erreur compilation
}
