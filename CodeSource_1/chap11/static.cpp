#include <iostream>
using namespace std ;
class cpte_obj
{  static int ctr ;             // compteur du nombre d’objets créés
 public :
   cpte_obj () ;
   ~cpte_obj () ;
} ;
int cpte_obj::ctr = 0 ;  // initialisation du membre statique ctr
cpte_obj::cpte_obj ()           // constructeur
{  cout << "++ construction : il y a maintenant   " << ++ctr << " objets\n" ;
}
cpte_obj::~cpte_obj ()          // destructeur
{   cout << "-- destruction  : il reste maintenant " << --ctr << " objets\n" ;
}
int main()
{  void fct () ;
   cpte_obj a ;
   fct () ;
   cpte_obj b ;
}
void fct ()
{  cpte_obj u, v ;
}   
