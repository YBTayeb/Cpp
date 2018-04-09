#include <iostream>
#include <memory>    // pour la classe auto_ptr
#include <vector>
using namespace std ;
main()
{ 
   auto_ptr<vector<int> > apvi2 ;
   
   { int v[] = {1, 2, 3, 4, 5} ;
     auto_ptr<vector<int> > apvi1(new vector<int> (v, v+5)) ;
     (*apvi1)[2] = 12 ;
     cout << (*apvi1)[1] << " " << (*apvi1)[2] << "\n" ; // affiche 2 12
     apvi2 = apvi1 ;   // apvi1 et apvi2 pointent sur le meme vector
                       // mais seul apvi2 est proprietaire du vector pointe
    (*apvi1)[2] = 20 ;    // OK
     cout << (*apvi2)[1] << " " << (*apvi2)[2] << "\n" ; // affiche 2 20
    }
    // ici apvi1 n'existe plus, mais le vector pointe appartient a vpi2
    // cout << (*apvi1)[1] ;  conduirait a une erreur de compilation
    cout << (*apvi2)[1] << " " << (*apvi2)[2] << "\n" ; // affiche toujours 2 20 
}
// ici apvi2 n'existe plus et le vector pointe est detruit
