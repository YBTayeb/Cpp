#include <iostream>
using namespace std ;
char op ;      // variable globale pour la nature de l'opération
               //  attention : doit être déclarée avant d'être utilisée

float oper (float v1, float v2)
{   float res ;
    switch (op)
    { case '+' : res = v1 + v2 ;
                 break ;
      case '-' : res = v1 - v2 ;
                 break ;
      case '*' : res = v1 * v2 ;
                 break ;
      case '/' : res = v1 / v2 ;
                 break ;
      default  : res = v1 + v2 ;
    }
    return res ;
}

main()
{   float oper (float, float) ;      /* prototype de oper */
    float x, y ;

    cout << "donnez deux nombres réels : " ;
    cin >> x >> y ;

    op = '+' ;
    cout << "leur somme est :      " << oper (x, y) << "\n" ;
    op = '-' ;
    cout << "leur différence est : " << oper (x, y) << "\n" ;
    op = '*' ;
    cout << "leur produit est :    " << oper (x, y) << "\n" ;
    op = '/' ;
    cout << "leur quotient est :   " << oper (x, y) << "\n" ;
}
