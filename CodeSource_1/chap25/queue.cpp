#include <iostream>
#include <queue>
#include <deque>
using namespace std ;
int main()
{ int i ;
  queue<int, deque<int> > q ;
  for (i=0 ; i<10 ; i++) q.push(i*i) ;
  cout << "tete de la queue : " << q.front() << "\n" ;
  cout << "fin de la queue : "  << q.back()  << "\n" ;
  q.front() = 99 ;    /* on modifie la tete de la queue */
  q.back()  = -99 ;   /* on modifie la fin de la queue */
  cout << "on depile la queue : " ;
  for (i=0 ; i<10 ; i++)
  { cout << q.front() << " " ; q.pop() ;
  }
}