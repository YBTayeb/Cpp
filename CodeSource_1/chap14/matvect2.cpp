#include <iostream>
using namespace std ;
       // ********* Déclaration de la classe matrice ************
class vect ;                    // pour pouvoir compiler correctement
class matrice
{   double mat[3] [3] ;         // matrice 3 X 3
  public :
    matrice (double t[3][3])    // constructeur, à partir d’un tableau 3 x 3 
      { int i ; int j ;
        for (i=0 ; i<3 ; i++) 
          for (j=0 ; j<3 ; j++) 
            mat[i] [j] = t[i] [j] ;
      }
    vect prod (const vect &) const ;  // prod = fonction membre (cette fois)
} ;

       // ********* Déclaration de la classe vect **************
class vect 
{   double v[3] ;      // vecteur à 3 composantes
  public :
    vect (double v1=0, double v2=0, double v3=0)   // constructeur
      { v[0] = v1 ; v[1]=v2 ; v[2]=v3 ; }
    friend vect matrice::prod (const vect &) const ;     // prod = fonction amie 
    void affiche () const
      { int i ;
        for (i=0 ; i<3 ; i++) cout << v[i] << " " ;
        cout << "\n" ;
      }
} ;

        // ********* Définition de la fonction prod ************
vect matrice::prod (const vect &x) const
{  int i, j ;
   double som ;
   vect res ;     // pour le résultat du produit
   for (i=0 ; i<3 ; i++)
     { for (j=0, som=0 ; j<3 ; j++)
          som += mat[i] [j] * x.v[j] ;
       res.v[i] = som ;  
     }
   return res ;
}
 
      // ********** Un petit programme de test *********
int main()
{  vect w (1,2,3) ;
   vect res  ; 
   double tb [3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} } ;
   matrice a =  tb  ;
   res = a.prod (w) ;
   res.affiche () ;
} 