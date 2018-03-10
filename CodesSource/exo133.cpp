template <class T> class point
{
   T x, y ;    // coordonnees
  public :
   point (T abs, T ord) { x = abs ; y = ord ; }
   void affiche ()
     { cout << "Coordonnees : " << x << " " << y << "\n" ;
     }
} ;


void point<char>::affiche ()
{ cout << "Coordonnees : " << (int)x << " " << (int)y << "\n" ;
}



template <class T> class pointcol : public point<T>
{  T cl ;
  public :
   pointcol (T abs, T ord, T coul) : point<T> (abs, ord)
     { cl = coul ;
     }
   void affiche ()
    {  point<T>::affiche () ;
       cout << "    couleur : " << cl << "\n" ;
    }
} ;

void pointcol<char>::affiche ()
{  point<char>::affiche () ;
   cout << "    couleur : " << (int)cl << "\n" ;
}
