set_int & set_int::operator = (set_int & e)    // ou :   const set_int & e 
// surd�finition de l'affectation - les commentaires correspondent � b = a
{
   if (this != &e)                       // on ne fait rien pour a = a
     { delete adval ;                    // lib�ration partie dynamique de b
       adval = new int [nmax = e.nmax] ; // allocation nouvel ensemble pour a
       nelem = e.nelem ;                 //      dans lequel on recopie
       int i ;                           //      enti�rement l'ensemble b
       for (i=0 ; i<nelem ; i++)         //      avec sa partie dynamique
	   adval[i] = e.adval[i] ;
     }
   return * this ;
}
