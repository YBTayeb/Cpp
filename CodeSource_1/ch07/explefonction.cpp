#include <iostream>
using namespace std ;
float fexple (float, int, int) ; // déclaration de fonction fexple
           /***** le programme principal (fonction main) *****/
int main ()
{  float x = 1.5 ;
   float y, z ;
   int n = 3, p = 5, q = 10 ;

         /* appel de fexple avec les arguments x, n et p */
   y = fexple (x, n, p) ;
   cout << "valeur de y : " << y << "\n" ;

         /* appel de fexple avec les arguments x+0.5, q et n-1 */
   z = fexple (x+0.5, q, n-1) ;
   cout << "valeur de z : " << z << "\n" ;
}

         /*************** la fonction fexple ****************/
float fexple (float x, int b, int c)
{  float val ;          // déclaration d’une variable "locale" à fexple
   val = x * x + b * x + c ;
   return val ;
}