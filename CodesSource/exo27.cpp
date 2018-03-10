#include <iostream>
using namespace std ;

float oper (float v1, float v2, char op)
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
{   float oper (float, float, char) ;      // déclaration de oper
    float x, y ;

    cout << "donnez deux nombres réels : " ;
    cin >> x >> y ;

    cout << "leur somme est :      " << oper (x, y, '+') << "\n" ;
    cout << "leur différence est : " << oper (x, y, '-') << "\n" ;
    cout << "leur produit est :    " << oper (x, y, '*') << "\n" ;
    cout << "leur quotient est :   " << oper (x, y, '/') << "\n" ;
}