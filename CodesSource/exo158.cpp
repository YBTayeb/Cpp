#include <iostream>  
#include <vector>
#include <limits.h>     
using namespace std ;

            /* déclaration de la classe bit_array */
class bit_array : public vector<bool>
{ public :
    bit_array (int = 16) ;
    int operator [] (int) const ;                           // valeur d'un bit
    void operator += (int) ;                                // activation d'un bit
    void operator -= (int) ;                                // désactivation d'un bit
                                                            // envoi sur flot
    friend ostream & operator << (ostream &, bit_array &) ;
                                // les opérateurs unaires
    void operator ++ () ;                                   // mise à 1
    void operator -- () ;                                   // mise à 0
    void operator ~ () ;                                    // complément à 1
} ;
	
 /* définition des fonctions de la classe bit_array */
bit_array::bit_array (int nb): vector<bool> (nb) {}
void bit_array::operator += (int i)
{ (*this).vector<bool>::operator[](i) = true ;  
}  // vector<bool>::operator[] pour forcer l'emploi de [] de classe de base


void bit_array::operator -= (int i)
{ (*this).vector<bool>::operator[](i) = false ;
}  // vector<bool>::operator[] pour forcer l'emploi de [] de classe de base

ostream & operator << (ostream & sortie, bit_array & t)   // voir note  
{ sortie << "<* " ;
  vector<bool>::iterator ie ;
  for (ie=t.begin() ; ie!=t.end() ; ie++)
    sortie << *ie << " " ;
  sortie << "*>" ;
  return sortie ;
}

void bit_array::operator ++ ()
{ vector<bool>::iterator ie ;
  for (ie=(*this).begin() ; ie!=(*this).end() ; ie++)
    *ie = true ;
}

void bit_array::operator -- ()
{ vector<bool>::iterator ie ;
  for (ie=(*this).begin() ; ie!=(*this).end() ; ie++)
    *ie = false ;
}

void bit_array::operator ~ ()
{ vector<bool>::iterator ie ;
  for (ie=(*this).begin() ; ie!=(*this).end() ; ie++)
    *ie = !(*ie) ;
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
