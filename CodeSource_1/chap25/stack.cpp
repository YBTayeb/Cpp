#include <iostream>
#include <stack>
#include <vector>
using namespace std ;
int main()
{
  int i ;
  stack<int, vector<int> > q ;
  cout << "taille initiale  : " << q.size() << "\n" ;
  for (i=0 ; i<10 ; i++) q.push(i*i) ;
  cout << "taille apres for  : " << q.size() << "\n"  ;
  cout << "sommet de la pile : " << q.top()  << "\n" ;
  q.top() = 99 ;   /* on modifie le sommet de la pile */
  cout << "on depile : " ;
  for (i=0 ; i<10 ; i++)  { cout << q.top() << " " ; q.pop() ; }
}