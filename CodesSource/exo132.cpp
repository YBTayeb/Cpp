template <class T> class pointcol : public point<T>
{  T cl ;
  public :
   pointcol (T abs, T ord, T coul) : point<T> (abs, ord)
     { cl = coul ;
     }
   void affiche () ;
} ;

template <class T> void pointcol<T>::affiche ()
{  point<T>::affiche () ;
   cout << "    couleur : " << cl << "\n" ;
}


main()
{ pointcol <int> p1 (2, 5, 1) ; p1.affiche () ;
  pointcol <float> p2 (2.5, 5.25, 4) ; p2.affiche () ;
}



template <class T, class U> class pointcol : public point<T>
{  U cl ;
  public :
   pointcol (T abs, T ord, U coul) : point<T> (abs, ord)
     { cl = coul ;
     }
   void affiche () ;
} ;

template <class T, class U> void pointcol<T, U>::affiche ()
{  point<T>::affiche () ;
   cout << "    couleur : " << cl << "\n" ;
}



main()
{
  pointcol <int, short> p1 (2, 5, 1) ; p1.affiche () ;
  pointcol <float, int> p2 (2.5, 5.25, 4) ; p2.affiche () ;
}



class pointcol : public point<int>
{
   short cl ;
  public :
   pointcol (int abs, int ord, short coul) : point<int> (abs, ord)
     { cl = coul ;
     }
   void affiche ()
     { point<int>::affiche () ;
       cout << "    couleur : " << cl << "\n" ;
     }
} ;


main()
{
  pointcol  p1 (2, 5, 1) ; p1.affiche () ;
  pointcol  p2 (2.5, 5.25, 4) ; p2.affiche () ;
}
