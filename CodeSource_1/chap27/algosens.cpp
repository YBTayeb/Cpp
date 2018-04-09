#include <iostream>
#include <set>
#include <algorithm>
using namespace std ;
int main()
{ char t1[] = "je me figure ce zouave qui joue du xylophone" ;
  char t2[] = "en buvant du whisky" ;
  void affiche (const set<char> &) ;
  set<char> e1(t1, t1+sizeof(t1)-1) ;
  set<char> e2(t2, t2+sizeof(t2)-1) ;
  set<char> u, i, d, ds ;
  cout << "ensemble 1     : " ; affiche (e1) ;
  cout << "ensemble 2     : " ; affiche (e2) ;
  set_union (e1.begin(), e1.end(), e2.begin(), e2.end(),
             inserter(u, u.begin())) ;
  cout << "union des deux : " ; affiche (u) ;
  set_intersection (e1.begin(), e1.end(), e2.begin(), e2.end(),
                    inserter(i, i.begin())) ;
  cout << "intersecton des deux           : " ; affiche (i) ;
  set_difference (e1.begin(), e1.end(), e2.begin(), e2.end(),
                  inserter(d, d.begin())) ;
  cout << "difference des deux            : " ; affiche (d) ;
  set_symmetric_difference (e1.begin(), e1.end(), e2.begin(), e2.end(),
                           inserter(ds, ds.begin())) ;
  cout << "difference_symetrique des deux : " ; affiche (ds) ;
}
void affiche (const set<char> &e )
{ set<char>::const_iterator ie ;
  for (ie=e.begin() ; ie!=e.end() ; ie++)  cout << *ie << " " ;  cout << "\n" ;
}
