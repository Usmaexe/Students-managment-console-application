#include "head.h"

int ajouter(attributs *, int &);
void saisie(attributs &);

int ajouter(attributs *E, int &n_etu)
{
    int ajt_etu ,choix;
    cout << endl;
    for (int i = 0 ; i < 40 ; i++)cout << " ";
    cout << "Entrer le nombre des étudiants que vous voulez ajouter : ";
    cin >> ajt_etu;

    //pointeur point vers un autre pointeur n'est ce pas ?

    ///le nombre des étudiants a été augementer
    n_etu = n_etu + ajt_etu;

    for (int i = n_etu - ajt_etu ; i < n_etu ; i++)
    {
        cout << endl;
        for (int i = 0 ; i < 50 ; i++)cout << " ";
        cout << "Etudiant " << i+1 << " :" << endl;
        saisie(E[i]);
    }

    cout << endl;
    for (int i = 0 ; i < 40 ; i++)cout << " ";
    if(ajt_etu==1)
    {
        cout << "L'étudiant est ajouter au tableau !\n ";
    }
    else
    {
        cout << "Les étudiants sont ajouter au tableau !\n ";
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
