	 /*** fichier histo.h : déclaration de la classe histo ***/
class histo
{   float min ;    // borne inférieure
    float max ;    // borne supérieure
    int nint ;     // nombre de tranches utiles
    int * adc ;  // pointeur sur les compteurs associés à chaque intervalle
                   // adc [i-1] = compteur valeurs de la tranche de rang i
    float ecart ;  // larg d'une tranche (pour éviter un recalcul systématique)
  public :
    histo (float=0.0, float=1.0, int=10) ; // constructeur
    ~histo () ;                      // destructeur
    histo & operator << (float) ;    // ajoute une valeur
    int operator [] (int) ;          // nombre de valeurs dans chaque tranche
} ;



      /************** définition de la classe histo **********/
#include "histo.h"
#include <iostream>  
using namespace std ;
/********************* constructeur ********************/
histo::histo (float mini, float maxi, int ninter)
{				   // protection contre arguments erronés
    if (maxi < mini)
       { float temp = maxi ; maxi = mini ; mini = temp ; }
    if (maxi == mini) maxi = mini + 1.0 ;   // arbitraire
    if (ninter < 1) nint =1 ;
    min = mini ; max = maxi ; nint = ninter ;
    adc = new int [nint] ;                  // alloc emplacements compteurs 
    int i ;
    for (i=0 ; i<=nint-1 ; i++) adc[i] = 0 ; // et r.a.z.
    ecart = (max - min) / nint ;             // largeur d'une tranche
}
      /********************* destructeur *********************/
histo::~histo ()
{   delete adc ; 
}

      /********************* opérateur << ********************/
histo & histo::operator << (float v) 
{   int nt =  (v-min) / ecart ;
	  // on ne comptabilise que les valeurs "convenables"
    if ( (nt>=0) && (nt<=nint-1) )  adc [nt] ++ ;
    return (*this) ;
}

      /********************* opérateur [] ********************/
int histo::operator [] (int n)         // résultat par valeur ici
{   if ( (n<1) || (n>nint) ) n=1 ;     // protection "débordement"
    return adc[n-1] ; 
}


#include "histo.h"
#include <iostream> 
using namespace std ;
main()
{   const int nint = 4 ;
    int i ;
    histo h (0., 5., nint) ;     // 4 tranches entre 0 et 5
    h << 1.5 << 2.4 << 3.8 << 3.0 << 2.0 << 3.5 << 2.8 << 4.6 ;
    h << 12.0 << -3.5 ;
    for (i=0 ; i<10 ; i++) h << i/2.0 ;
    cout << "valeurs des tranches \n" ;
    for (i=1 ; i<=nint ; i++)
       cout << "numéro " << i << " : " << h[i] << "\n"  ; 
    // une affectation telle que  h[2] = ... serait rejetée en compilation   
}

