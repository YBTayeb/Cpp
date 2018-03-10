	  /* déclaration de la classe vecteur3d */
class vecteur3d
{
    float x, y, z ;
  public :
    vecteur3d (float c1=0, float c2=0, float c3=0)  // constructeur
      {  x=c1 ; y=c2 ; z=c3;
      }
    vecteur3d somme (vecteur3d &) ;      // somme (résultat par valeur)
    float prodscal (vecteur3d &) ;       // produit scalaire
    void affiche () ;                    // affichage composantes
} ;



	  /* définition de la classe vect3d */
#include <iostream>  
using namespace std ;
vecteur3d vecteur3d::somme (vecteur3d & v)
{   vecteur3d res ;
    res.x = x + v.x ;
    res.y = y + v.y ;
    res.z = z + v.z ;
    return res ;
}                                                    
float vecteur3d::prodscal (vecteur3d & v) 
{   return ( v.x * x + v.y * y + v.z * z) ;
}
void vecteur3d::affiche ()
{   cout << "< " << x << ", " << y << ", " << z << ">" ;
}



	 /* programme d'essai de la classe vecteur3d */
#include <iostream> 
using namespace std ;
main()
{  vecteur3d v1 (1,2,3), v2 (3,0, 2), w ;
   cout << "v1 = " ; v1.affiche () ; cout << "\n" ;
   cout << "v2 = " ; v2.affiche () ; cout << "\n" ;
   cout << "w = " ;  w.affiche () ;  cout << "\n" ;
   w = v1.somme (v2) ;
   cout << "w = " ;  w.affiche () ;  cout << "\n" ;
   cout << "V1.V2 = " << v1.prodscal (v2) << "\n" ;
}
