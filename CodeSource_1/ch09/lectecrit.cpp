#include <iostream>
using namespace std ;
int main()
{  char nom [20], prenom [20], ville [25] ;
   cout << "quelle est votre ville : " ;
   cin >> ville ;
   cout << "donnez votre nom et votre prénom : " ;
   cin >> nom >> prenom ;
   cout << "bonjour cher " << prenom << " "<< nom <<  " qui habitez à " << ville ;
}