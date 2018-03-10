#include <iostream>  
#include <set>
using namespace std ;
void affiche (set<int>) ; 
main()
{  void fct (set<int>) ;
   void fctref (set<int> &) ;
   set<int> ens ;
   cout << "donnez 10 entiers \n" ;
   int i, n ;
   for (i=0 ; i<10 ; i++)
      { cin >> n ;
        ens.insert(n) ;
      }
   cout << "il y a : " << ens.size() << " entiers differents\n" ;
   cout << "qui forment l\'ensemble : " ; affiche(ens) ;
   fct (ens) ;
   cout << "au retour de fct, il y en a " << ens.size() << "\n" ;
   cout << "qui forment l\'ensemble : " ; affiche(ens) ;
   fctref (ens) ;
   cout << "au retour de fctref, il y en a " << ens.size() << "\n" ;
   cout << "qui forment l\'ensemble : " ; affiche(ens) ;
   cout << "appartenance de -1  : " << ens.count(-1)  << "\n" ;
   cout << "appartenance de 500 : " << ens.count(500) << "\n" ;
   set<int> ensa, ensb ;
   ensa = ensb = ens ;
   cout << "ensemble a : " ; affiche(ensa) ;
   cout << "ensemble b : " ; affiche(ensb) ;
}

void fct (set<int> e)
{  cout << "ensemble reçu par fct : " ; affiche(e) ;
   e.insert(-1) ; e.insert(-2) ; e.insert(-3) ;
}

void fctref (set<int> & e) 
{  cout << "ensemble recu par fctref : " ; affiche(e) ;
   e.insert(-1) ; e.insert(-2) ; e.insert(-3) ;
}

void affiche (set<int> e)
{ set<int>::iterator ie ;
  cout << "[ " ;
  for (ie=e.begin() ; ie!=e.end() ; ie++)
     cout << *ie << " ";
  cout <<"] \n" ;
}







#include <iostream>  // voir N.B. du paragraphe "nouvelles possibilités
                     // d'entrées-sorties du chapitre II
#include <set>
using namespace std ;

	 /************* déclaration de la classe set_int *********/
class set_int : public set<int> 
{ public :
     // envoi ensemble dans un flot
   friend ostream & operator << (ostream &, set_int &) ;
} ;


	 /************* définition de la classe set_int *********/
ostream & operator << (ostream & sortie, set_int & e)   // voir note 
{  sortie << "[ " ;
   set<int>::iterator ie ;
   for (ie=e.begin() ; ie!=e.end() ; ie++)
      sortie << *ie << " " ;
   sortie << "]" ;
   return sortie ;
}

	 /************* test de la classe set_int *********/
main()
{
   void fct (set_int) ;
   void fctref (set_int &) ;
   set_int ens ;
   cout << "donnez 10 entiers \n" ;
   int i, n ;
   for (i=0 ; i<10 ; i++)
      { cin >> n ;
        ens.insert(n) ;
      }
   cout << "il y a : " << ens.size() << " entiers differents\n" ;
   cout << "qui forment l\'ensemble : " << ens << "\n" ;
   fct (ens) ;
   cout << "au retour de fct, il y en a " << ens.size() << "\n" ;
   cout << "qui forment l\'ensemble : " << ens << "\n" ;
   fctref (ens) ;
   cout << "au retour de fctref, il y en a " << ens.size() << "\n" ;
   cout << "qui forment l\'ensemble : " << ens << "\n" ;
   cout << "appartenance de -1  : " << ens.count(-1)  << "\n" ;
   cout << "appartenance de 500 : " << ens.count(500) << "\n" ;
   set_int ensa, ensb ;
   ensa = ensb = ens ;
   cout << "ensemble a : " << ensa << "\n" ;
   cout << "ensemble b : " << ensb << "\n" ;
}

void fct (set_int e)
{  cout << "ensemble reçu par fct : " << e << "\n" ;
   e.insert(-1) ; e.insert(-2) ; e.insert(-3) ;
}

void fctref (set_int & e) 
{  cout << "ensemble reçu par fctref : " << e << "\n" ;
   e.insert(-1) ; e.insert(-2) ; e.insert(-3) ;
}
