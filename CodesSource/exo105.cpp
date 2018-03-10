class point
{   int x, y ;
  public :
    point (int = 0, int = 0) ;
    friend int operator == (point, point) ;
} ;

int operator == (point a, point b)
{   return  a.x == b.x && a.y == b.y ;
}



class pointcol : public point
{   int cl ;
  public :
    pointcol (int = 0, int = 0, int = 0) ;
    //   éventuelles fonctions membre
}  ;
