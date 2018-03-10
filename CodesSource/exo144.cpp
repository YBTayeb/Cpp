	/* fichier bitarray.h : déclaration de la classe bit_array */
#include <iostream>  
using namespace std ;
class bit_array
{
    int nbits ;       // nombre courant de bits du tableau
    int ncar ;        // nombre de caractères nécessaires (redondant)
    char * adb ;      // adresse de l'emplacement contenant les bits
  public :
    bit_array (int = 16) ;      // constructeur usuel
    bit_array (bit_array &) ;   // constructeur par recopie 
    ~bit_array () ;             // destructeur
                                // les opérateurs binaires
    bit_array & operator = (bit_array &) ;                  // affectation 
    int operator [] (int) ;                                 // valeur d'un bit
    void operator += (int) ;                                // activation d'un bit
    void operator -= (int) ;                                // désactivation d'un bit
                                                            // envoi sur flot
    friend ostream & operator << (ostream &, bit_array &) ;

                                // les opérateurs unaires
    void operator ++ () ;                                   // mise à 1
    void operator -- () ;                                   // mise à 0
    void operator ~ () ;                                    // complément à 1
} ;



#include "bitarray.h"
#include <climits>     
#include <iostream> 
using namespace std ;
bit_array::bit_array (int nb)
{  nbits = nb ;
   ncar = nbits / CHAR_BIT + 1 ;
   adb = new  char [ncar] ;
   int i ;
   for (i=0 ; i<ncar ; i++) adb[i] = 0 ;    // raz
}
bit_array::bit_array (bit_array & t)
{  nbits = t.nbits ; ncar = t.ncar ;
   adb = new  char [ncar] ;
   int i ;
   for (i=0 ; i<ncar ; i++) adb[i] = t.adb[i] ;
}
bit_array::~bit_array()
{  delete adb ;
}
bit_array & bit_array::operator = (bit_array & t)
{  if (this != & t)      //  on ne fait rien pour t=t
     { delete adb ;
       nbits = t.nbits ; ncar = t.ncar ;
       adb = new char [ncar] ;
       int i ;
       for (i=0 ; i<ncar ; i++)
          adb[i] = t.adb[i] ;
     }
   return *this ;
}
int bit_array::operator [] (int i) 
{       // le bit de rang i s'obtient en considérant le bit 
        //   de rang i % CHAR_BIT du caractère de rang i / CHAR_BIT
    int carpos = i / CHAR_BIT ; 
    int bitpos = i % CHAR_BIT ;
    return  ( adb [carpos] >> CHAR_BIT - bitpos -1 ) & 0x01 ;
}
void bit_array::operator += (int i)
{    int carpos = i / CHAR_BIT ; 
     if (carpos < 0 || carpos >= ncar) return ;    // protection
     int bitpos = i % CHAR_BIT ;
     adb [carpos] |= (1 << (CHAR_BIT - bitpos - 1) ) ;
}
void bit_array::operator -= (int i)
{    int carpos = i / CHAR_BIT ;
     if (carpos < 0 || carpos >= ncar) return ;    // protection
     int bitpos = i % CHAR_BIT ;
     adb [carpos] &= ~(1 << CHAR_BIT - bitpos - 1) ;
}

ostream & operator << (ostream & sortie, bit_array & t)    /* voir note  */
{   sortie << "<* " ;
    int i ;
    for (i=0 ; i<t.nbits ; i++)
       sortie << t[i] << " " ;
    sortie << "*>" ;
    return sortie ;
}
void bit_array::operator ++ ()
{   int i ;
    for (i=0 ; i<ncar ; i++) adb[i] = 0xFFFF ;
}
void bit_array::operator -- ()
{   int i ;
    for (i=0 ; i<ncar ; i++) adb[i] = 0 ;
}

void bit_array::operator ~ ()
{   int i ;
    for (i=0 ; i<ncar ; i++) adb[i] = ~ adb[i] ;
} 




	 /* programme d'essai de la classe bit_array */
main ()
{ bit_array t1 (34) ;
  cout << "t1 = " << t1 << "\n" ;
  t1 +=3 ; t1 += 0 ; t1 +=8 ; t1 += 15 ; t1 += 33 ;
  cout << "t1 = " << t1 << "\n" ;
  t1-- ;
  cout << "t1 = " << t1 << "\n" ;
  t1++ ;
  cout << "t1 = " << t1 << "\n" ;
  t1 -= 0 ; t1 -= 3 ; t1 -= 8 ; t1 -= 15 ; t1 -= 33 ;
  cout << "t1 = " << t1 << "\n" ;
  cout << "t1 = " << t1 << "\n" ;
  bit_array t2 (11), t3 (17) ;
  cout << "t2 = " << t2 << "\n" ;
  t2 = t3 = t1 ;
  cout << "t3 = " << t3 << "\n" ;
}
