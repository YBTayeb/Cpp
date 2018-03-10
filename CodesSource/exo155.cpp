#include <iostream>  
#include <stack>
#include <vector>
using namespace std ;

main()
{
    void fct (stack<int, vector<int> >) ; 
    stack<int, vector<int> > pile ;  // il faut un conteneur de base, ici vector
    cout << "vide : " << pile.empty() << "\n" ;  // ici, on affiche un boolen
    pile.push(1) ; pile.push(2) ; pile.push(3) ; pile.push(4) ;
    fct (pile) ;
    int n, p ;
    n = pile.top() ; pile.pop() ; p = pile.top() ; pile.pop() ;   // depile 2 valeurs
    cout << "haut de la pile au retour de fct : " << n << " " << p << "\n" ;
    stack <int, vector<int> > pileb ;
    pileb = pile ;       // ici l'affectation fonctionne !!!
}

void fct (stack <int, vector<int> > pl)
{
    cout << "haut de la pile recue par fct : " ;
    int  n, p ;
    n = pl.top(); pl.pop() ; p = pl.top() ; pl.pop() ; // on depile 2 valeurs
    cout << n << " " << p << "\n" ;
    pl.push(12) ;      // on en ajoute une
}
