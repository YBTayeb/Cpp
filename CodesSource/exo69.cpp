          /* d�claration de la classe vecteur3d */
class vecteur3d
{
    float x, y, z ;
   public :
    vecteur3d () ;                     // constructeur sans arguments
    vecteur3d (float, float, float) ;  // constructeur 3 composantes
    .....
} ;

    /* d�finition des constructeurs de la classe vecteur3d */
vecteur3d::vecteur3d ()
{ x = 0 ; y = 0 ; z = 0 ; 
}
vecteur3d::vecteur3d (float c1, float c2, float c3)
{ x = c1 ; y = c2 ; z = c3 ;
}





          /* d�claration de la classe vecteur3d */
class vecteur3d
{ 
    float x, y, z ;
   public :
    vecteur3d (float=0.0, float=0.0, float=0.0) ; // constructeur (unique)
    .....
} ;
    /* d�finition du constructeur de la classe vecteur3d */
vecteur3d::vecteur3d (float c1, float c2, float c3)
{ x = c1 ; y = c2 ; z = c3 ;
}






          /* d�claration de la classe vecteur3d */
class vecteur3d
{   float x, y, z ;
   public :
      // constructeur unique "en ligne"
   vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)  
    { x = c1 ; y = c2 ; z = c3 ;
    }
   .....
} ;
