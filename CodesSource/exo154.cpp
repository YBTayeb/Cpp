#include <iostream> 
#include <vector>
using namespace std ;
main()
{ vector<vector<int> > t1 (4) ;  // vecteur de 4 vecteurs
  vector<int> v(3) ;             // veteur de 3 entiers, non initialise 
  int i, j ;
  for (i=0 ; i<4 ; i++)
    t1[i] = v ;
  for (i=0 ; i<4 ; i++)
    for (j=0 ; j<3 ; j++)
	  t1[i][j] = i+j ;
  for (i=0 ; i<4 ; i++)
    { for (j=0 ; j<3 ; j++)
	  cout << t1 [i] [j] << " " ;
	  cout << "\n" ;
    }
}




#include <iostream>  
#include <vector>
using namespace std ;
main()
{ try
  { vector<vector<int> > t1 (4) ;  // vecteur de 4 vecteurs - espace entre > et > 
    vector<int> v(3) ;             // vecteur de 3 entiers, non initialise 
    int i, j ;

    for (i=0 ; i<4 ; i++)
      t1.at(i) = v ;
    for (i=0 ; i<4 ; i++)
      for (j=0 ; j<3 ; j++)
        (t1.at(i)).at(j) = i+j ;
    for (i=0 ; i<4 ; i++)
      { for (j=0 ; j<3 ; j++)
  	   cout << (t1.at(i)).at(j) << " " ;
 	   cout << "\n" ;
      }
  }
  catch (out_of_range oor)
    { cout << "exception out of range\n" ;
      exit(-1) ;
    }
}





#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties du chapitre II
#include <vector>
using namespace std ;
	 /******** déclaration de la classe int2d ********/
class int2d : public vector<vector<int> > 
{  int nlig ;        // nombre de "lignes" 
   int ncol ;        // nombre de "colonnes"
  public :
   int2d (int nl, int nc) ;    // constructeur
   int & operator () (int, int) ;  // accès à un élément, par ses 2 "indices"
} ;
	 /*********** définition du constructeur **********/	    
int2d::int2d (int nl, int nc) : vector<vector<int> > (nl)
{  nlig = nl ; ncol = nc ;
   vector<int> v(nc) ;
   int i ;
   for (i=0 ; i<nl ; i++) (*this)[i] = v ;
}
	 /********** définition de l'opérateur () *********/
int & int2d::operator () (int i, int j)
{  if ( (i<0) || (i>=nlig) ) i=0 ;  // protections sur premier indice
   if ( (j<0) || (j>=ncol) ) j=0 ;  // protections sur second indice
   return (*this)[i][j] ;
}

main()
{   int2d t1 (4,3) ;
    int i, j ;
    for (i=0 ; i<4 ; i++)
       for (j=0 ; j<3 ; j++)
	  t1(i, j) = i+j ;
    for (i=0 ; i<4 ; i++)
       { for (j=0 ; j<3 ; j++)
	    cout << t1 (i, j) << " " ;
	 cout << "\n" ;
       }
}
