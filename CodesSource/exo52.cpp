void remplit (personne & p)
{   char rep ;           // pour lire une réponse de type O/N
    cout << "nom : " ;
    cin >> p.nom ;       // attention, pas de contrôle de longueur

    cout << "date embauche (jj mm aa) : " ;
    cin >> p.date_embauche.jour
        >> p.date_embauche.mois
        >> p.date_embauche.annee ;

    cout << "date poste = date embauche ? (O/N) : " ;
    cin >> rep ;
    if (rep == 'O') p.date_poste = p.date_embauche ;
       else  { cout << "date poste (jj mm aa) : " ;
               cin >> p.date_poste.jour
                   >> p.date_poste.mois
                   >> p.date_poste.annee ;
             }
}


main()
{  void remplit (personne &) ; // déclaration remplit
   personne bloc ;
   remplit (bloc) ;
   cout << "nom : " << bloc.nom << "\ndate embauche : "
        << bloc.date_embauche.jour << " "
        << bloc.date_embauche.mois << " "
        << bloc.date_embauche.annee << "\n"
        <<"date poste  : "
        << bloc.date_poste.jour << " "
        << bloc.date_poste.mois << " "
        << bloc.date_poste.annee  ;
}