#include "head.h"

///Déclaration des fonctions utile dans certains fichier du projet
int affichage(attributs *,const int &);
int Demander_choix();
void affichage_att();///l'affichage des attributs
void affichage_char();///l'affichage des attributs
void faffichage(attributs *,const int &);///l'affichage pour une fonction (contient des informations come le temps des guides
void saffichage(attributs &);///l'affichage du contenu de la structure étudiant

void affichage_char()
{
    cout << "+----+";
    for (int i = 0 ; i < 22 ; i++)cout <<"-";
    cout << "+";
    for (int i = 0 ; i < 22 ; i++)cout <<"-";
    cout << "+";
    for (int i = 0 ; i < 32 ; i++)cout <<"-";
    cout << "+";
    for (int i = 0 ; i < 32 ; i++)cout <<"-";
    cout << "+";
    for (int i = 0 ; i < 10 ; i++)cout <<"-";
    cout << "+";
    cout << endl;
}

void affichage_att()
{
    cout << "| Id |         Nom          |        Prenom        |";
    cout << "            Adresse             |           Specialité           |  Niveau  |";
    cout << endl;
}

void saffichage(attributs &E)
{
    cout << "| " << E.id << "  | " << E.nom << " | " << E.prenom << " | ";
    cout << E.addresse << " | " << E.specialite << " | " << E.niveau << "        |";
    cout << endl;
}

void faffichage(attributs *E,const int &n_etu)
{
    time_t now = time(0);
    char *temps = ctime(&now);
    for(int l = 1 ; l < 14 ; l++)
    {
        switch(l)
        {
        case 2 :
            {
                for (int i = 0 ; i < 52 ; i++)cout << " ";
                cout<< temps;
            }
            break;

        case 4 :
            {
                for (int i = 0 ; i < 52 ; i++)cout << " ";
                cout << "Le Tableau Des étudiants : \n";
            }
            break;

        case 7 :
            {
                affichage_char();
            }
            break;

        case 8 :
            {
                affichage_att();
            }
            break;

        case 9 :
            {
                affichage_char();
            }
            break;

        case 10 :
            {
                for (int i = 0 ; i < n_etu ; i++)
                    saffichage(E[i]);
            }
            break;

        case 11 :
            {
                affichage_char();
            }
            break;

        default :
            {
                cout << endl;
            }
        }
    }
}

int affichage(attributs *E,const int &n_etu)
{
    int choix;
    faffichage(E,n_etu);
    do
    {
        cout << "      1 | Retour";
        for (int i = 0 ; i < 100 ; i++) cout << " ";
        cout << " Quitter | 2     ";
        choix = Demander_choix();
    }while (choix == 1 && choix == 2);
    return choix;
}
