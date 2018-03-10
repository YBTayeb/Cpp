template <class T> class point
{  T x, y ;    // coordonnees
  public :
   point (T abs, T ord) { x = abs ; y = ord ; }
   void affiche ()
     { cout << "Coordonnees : " << x << " " << y << "\n" ;
     }
} ;

template <class T, class U> class cercle : public point<T>
{  U r ;       // rayon
  public :
   cercle (T abs, T ord, U ray) : point<T> (abs, ord)
     { r = ray ;
     }


   void affiche ()
     { point<T>::affiche () ;
       cout << "    rayon : " << r ;
     }
} ;




template <class T, class U> class cercle
{  point<T> c ;  // centre
   U r ;         // rayon
  public :
   cercle (T abs, T ord, U ray) : c(abs, ord)     // pourrait r(ray)
     { r = ray ;
     }
   void affiche ()
     { c.affiche () ;
       cout << "    rayon : " << r ;
     }
} ;
