#include "head.h"

int modifier(attributs *, const int);
void faffichage(attributs *,const int &);
void saisie(attributs &);

int modifier(attributs *E, const int &n_etu)
{
    int id_modf,choix;
    faffichage(E,n_etu);
    cout << endl;
    for (int i = 0 ; i < 40 ; i++)cout << " ";
    cout << "Entrez l'Id d'étudiant que vous voulez modifier : ";
    cin >> id_modf;

    cout << endl;
    if(id_modf <= n_etu)
    {
        for (int i = 0 ; i < 40 ; i++)cout << " ";
        cout << "Nouveau infos d'étudiant " << id_modf << " :" << endl;

        saisie(E[id_modf-1]);
    }
    else
    {
        for (int i = 0 ; i < 40 ; i++)cout << " ";
        cout << "Etudiant Introuvable " << endl;
    }


    do
    {
        cout << "      1 | Retour";
        for (int i = 0 ; i < 100 ; i++) cout << " ";
        cout << " Quitter | 2     ";
        choix = Demander_choix();
    }while (choix != 1 && choix != 2);
    return choix;

}
