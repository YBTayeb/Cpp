	 /* fichier bigint.h : déclaration de la classe big_int */
#define NCHIFMAX 32   // nombre maxi de chiffres d'un entier (dépend de
 		         //     l'implémentation 
#include <iostream> 
using namespace std ;

class big_int
{   int nchif ;                   // nombre de chiffres
    char * adchif ;               // adresse emplacement contenant les chiffres
    big_int (int, int) ;          // constructeur privé (à usage interne)
  public :                     
    big_int (unsigned long=0) ;   // constructeur à partir d'un nombre usuel
    big_int (char *) ;            // constructeur à partir d'une chaîne
    big_int (big_int &) ;         // constructeur par recopie      
    big_int & operator = (const big_int &) ;      // affectation 
    friend big_int operator + (const big_int &,const  big_int &) ; // opérateur + 
    friend ostream & operator << (ostream &, big_int &) ;    // opérateur <<
} ;



	 /* définition des fonctions de la classe big_int */
#include <string.h>
#include "bigint.h"
#include <iostream> 
using namespace std ;
big_int::big_int (int n, int p)    // l'argument p est fictif
{   nchif = n ;
    adchif = new char [nchif] ;
}
big_int::big_int (char * ch) 
{ 
    nchif = strlen (ch) ;
    adchif = new char [nchif] ;
    int i ; char c ;
    for (i=0 ; i<nchif ; i++)
      { c = ch[i] - '0' ;
        if (c<0 || c>9) c=0 ;       // précaution
        adchif[nchif-i-1] = c ;     // attention à l'ordre des chiffres !
      }
}

big_int::big_int (unsigned long n)
{     // on crée le grand entier correspondant dans un emplacement temporaire
    char * adtemp = new char [NCHIFMAX] ;
    int i = 0 ;   
    while (n)
      { adtemp [i++] = n % 10 ;
        n /= 10 ;
      }
       // ici i contient le nombre exact de chiffres
    nchif = i ;
    adchif = new char [nchif] ;
    for (i=0 ; i<nchif ; i++)
        adchif [i] = adtemp [i] ;
       // on libère l'emplacement temporaire
    delete adtemp ;
}

big_int::big_int (big_int & n)
{  nchif = n.nchif ;
   adchif = new char [nchif] ;
   int i ;
   for (i=0 ; i<nchif ; i++)
       adchif [i] = n.adchif [i] ;
}
big_int & big_int::operator = (const big_int & n)
{  if (this != &n)
      { delete adchif ;
        nchif = n.nchif ;
        adchif = new char [nchif] ;
        int i ;
        for (i=0 ; i<nchif ; i++)
           adchif [i] = n.adchif [i] ;
      }
   return * this ;
}
big_int operator + (const big_int & n, const big_int & p)  /* voir note  */
{   int nchifmax = (n.nchif > p.nchif) ? n.nchif : p.nchif ;
    int ncar = nchifmax + 1 ;
       // préparation du résultat dans zone temporaire de taille ncar
    char * adtemp = new char [ncar] ;
    int i, s, chif1, chif2 ;
    int ret = 0 ;
    for (i=0 ; i<nchifmax ; i++)
      { chif1 = (i<n.nchif) ? n.adchif [i] : 0 ;
        chif2 = (i<p.nchif) ? p.adchif [i] : 0 ;
        s = chif1 + chif2 + ret ;
        if (s>=10) { s -= 10 ;
                     ret = 1 ;
                   }
               else ret = 0 ;
        adtemp [i] = s ;
      }
    if (ret == 1) adtemp [ncar-1] = 1 ;
             else ncar-- ;
      // construction d'un objet de type big_int où l'on recopie le résultat
    big_int res (ncar, 0) ;      // second argument fictif
    res.nchif = ncar ;
    for (i=0 ; i<ncar ; i++)
       res.adchif [i] = adtemp [i] ;
    delete adtemp ;
    return res ;
}

ostream & operator << (ostream & sortie, big_int & n)
{   int i ;
    for (i=n.nchif-1 ; i>=0 ; i--)       // attention à l'ordre !
       sortie << (int)n.adchif [i] ;
    return sortie ;
}





	 /* programme d'essai */
#include "bigint.h"
#include <iostream> 
using namespace std ;

main()
{  big_int n1(12) ; big_int n2(35) ; big_int n3 ;
   n3 = n1 + n2 ;
   cout << n1 << " + " << n2 << " = " << n3 << "\n" ;
   big_int n4 ("1234567890123456789"), n5("9876543210987654321"), n6 ;
   n6 = n4 + n5 ;
   cout << n4 << " + " << n5 << " = " << n6 << "\n" ;
   cout << n6 << " + " << n1 << " = " << n6 + n1 << "\n" ;
   n2 = n4 + 5 ;   // serait rejetée si operator = n'avait pas argument const
   cout << n4 << "+5 = " << n2 << "\n" ;
   // ici une expression comme  n1 + "123" serait correcte et de type big_int
   // ici une expression comme  n2 + 5.69  serait correcte et de type big_int
}    
