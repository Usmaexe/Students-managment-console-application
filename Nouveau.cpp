#include "head.h"

void nouveau(attributs *, const int N);
void saisie (attributs &);


///la saisie du chaque etudiant :
void saisie(attributs &E)
{
    for (int i = 0 ; i < 50 ; i++)cout << " ";
    cout << "Id : ";
    cin >> E.id;

    for (int i = 0 ; i < 50 ; i++)cout << " ";
    E.nom = new char [20];
    cout << "Nom : ";
    cin >> E.nom;
    for(int i = 0 ; i < 20 ; i++)
    {
        if(E.nom[i]=='\0')
        {
            for(int j = i ; j < 20 ; j++){ E.nom[j] = ' ';}
            E.nom[20] = '\0';
            break;
        }
    }

    for (int i = 0 ; i < 50 ; i++)cout << " ";
    E.prenom = new char [20];
    cout << "Prénom : ";
    cin >> E.prenom;
    for(int i = 0 ; i < 20 ; i++)
    {
        if(E.prenom[i]=='\0')
        {
            for(int j = i ; j < 20 ; j++){ E.prenom[j] = ' ';}
            E.prenom[20] = '\0';
            break;
        }
    }
    cin.clear();
    cin.ignore();
    for (int i = 0 ; i < 50 ; i++)cout << " ";
    E.addresse= new char [30];
    cout << "Adresse : ";
    cin.getline(E.addresse,30);
    for(int i = 0 ; i < 30 ; i++)
    {
        if(E.addresse[i]=='\0')
        {
            for(int j = i ; j < 30 ; j++){ E.addresse[j] = ' ';}
            E.addresse[30] = '\0';
            break;
        }
    }

    for (int i = 0 ; i < 50 ; i++)cout << " ";
    E.specialite = new char [30];
    cout << "Spécialité : ";
    cin.getline(E.specialite,30);
    for(int i = 0 ; i < 30 ; i++)
    {
        if(E.specialite[i]=='\0')
        {
            for(int j = i ; j < 30 ; j++){ E.specialite[j] = ' ';}
            E.specialite[30] = '\0';
            break;
        }
    }

    for (int i = 0 ; i < 50 ; i++)cout << " ";
    cout << "Niveau : ";
    cin >> E.niveau;
}


void nouveau(attributs *E, const int N)
{
    cout << endl;
    for (int i = 0 ; i < 53 ; i++)cout << " ";
    cout << "Entrez les attributs de : \n";


    for (int i = 0 ; i < N ; i++)
    {
        cout << endl;
        for (int i = 0 ; i < 50 ; i++)cout << " ";
        cout << "Etudiant " << i+1 << " :" << endl;
        saisie(E[i]);
    }

}
