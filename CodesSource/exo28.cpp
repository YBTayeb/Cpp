#include <iostream>
using namespace std ;
char op ;      // variable globale pour la nature de l'op�ration
               //  attention : doit �tre d�clar�e avant d'�tre utilis�e

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

    cout << "donnez deux nombres r�els : " ;
    cin >> x >> y ;

    op = '+' ;
    cout << "leur somme est :      " << oper (x, y) << "\n" ;
    op = '-' ;
    cout << "leur diff�rence est : " << oper (x, y) << "\n" ;
    op = '*' ;
    cout << "leur produit est :    " << oper (x, y) << "\n" ;
    op = '/' ;
    cout << "leur quotient est :   " << oper (x, y) << "\n" ;
}
