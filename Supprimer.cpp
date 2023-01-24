#include "head.h"

int supprimer(attributs *E,int &n_etu)
{
    int choix,id_sup;
    time_t now = time(0);
    char *temps = ctime(&now);
    cout << endl;
    for(int i = 0 ; i < 53 ; i++)cout << " ";
    cout << temps;

    cout << endl;
    for(int i = 0 ; i < 38 ; i++)cout << " ";
    cout << "Entrer l'Id d'étudiant(e) que vous voulez supprimer : ";
    cin >> id_sup;
    cout << endl;

    for(int  p = 0 ; p < n_etu ; p++)
    {
        if (id_sup==(E+p)->id)
        {
            for (int i = p ; i < n_etu-1 ; i++)
            {
                (E+i)->id = (E+i+1)->id;
                strcpy((E+i)->nom,(E+i+1)->nom);
                strcpy((E+i)->prenom,(E+i+1)->prenom);
                strcpy((E+i)->addresse,(E+i+1)->addresse);
                strcpy((E+i)->specialite,(E+i+1)->specialite);
                (E+i)->niveau = (E+i+1)->niveau;
            }
        }
    }
    n_etu--;

    cout << endl;
    for(int i = 0 ; i < 36 ; i++)cout << " ";
    cout << "Les informations d'étudiant(e) a été supprimer avec succées ! \n\n";

    do
    {
        cout << "      1 | Retour";
        for (int i = 0 ; i < 100 ; i++) cout << " ";
        cout << " Quitter | 2     ";
        choix = Demander_choix();
    }while (choix != 1 && choix != 2);
    return choix;
}
