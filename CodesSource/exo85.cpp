class vecteur3d
{  float x, y, z ;
  public :
   vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)
     { x = c1 ; y = c2 ; z = c3 ;
     }
   friend vecteur3d operator  + (vecteur3d, vecteur3d) ;        
   friend float operator * (vecteur3d, vecteur3d) ;
} ;

vecteur3d operator + (vecteur3d v, vecteur3d w)
{  vecteur3d res ;    
   res.x = v.x + w.x ;
   res.y = v.y + w.y ;
   return res ;             
}

float operator * (vecteur3d v, vecteur3d w)
{  return (v.x * w.x + v.y * w.y + v.z * w.z) ;
}
